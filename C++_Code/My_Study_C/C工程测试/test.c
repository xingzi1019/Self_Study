#define _CRT_SECURE_NO_WARNINGS 1
#include "test.exam.h"
//============================================================================
//* 题目1：宏定义与指针操作
//* 考察点：宏定义、指针运算、类型转换
//* 分值：10分
//* 要求：解释代码输出，找出潜在问题
//============================================================================

#define BYTE_OFFSET(ptr, offset) ((void*)((char*)(ptr) + (offset)))

void test_macro_pointer() {
	printf("=== 题目1：宏定义与指针操作 ===\n");

	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptr = arr;

	// 问题1.1：以下操作的输出是什么？说明原理
	int* p1 = BYTE_OFFSET(ptr, 8);
	printf("1.1 输出: %d\n", *p1);

	// 问题1.2：解释这个操作的原理和输出
	long value = 0x123456789ABCDEF0;
	char* byte_ptr = (char*)&value;
	byte_ptr = BYTE_OFFSET(byte_ptr, 3);
	printf("1.2 输出: %02X\n", (unsigned char)*byte_ptr);

	// 问题1.3：这个宏有什么潜在风险？如何改进？
	printf("1.3 潜在风险：缺少类型检查，可能导致越界访问\n");
	printf("================================\n\n");
}

//============================================================================
// * 题目2：复杂结构体与内存对齐
// * 考察点：结构体、内存对齐、指针运算
// * 分值：10分
// * 要求：计算大小，实现安全操作
// ============================================================================

#pragma pack(push, 1)
typedef struct {
	uint8_t type;
	uint32_t id;
	uint16_t length;
	char data[0];  // 柔性数组
} PacketHeader;

typedef struct 
{
	PacketHeader header;
	uint32_t checksum;
	uint8_t reserved[3];
} NetworkPacket;
#pragma pack(pop)

void analyze_packet() 
{
	printf("=== 题目2：复杂结构体与内存对齐 ===\n");

	// 2.1 计算结构体大小
	printf("2.1 结构体大小：\n");
	printf("    sizeof(PacketHeader) = %zu\n", sizeof(PacketHeader));
	printf("    sizeof(NetworkPacket) = %zu\n", sizeof(NetworkPacket));

	// 2.2 创建数据包
	int data_size = 100;
	NetworkPacket* packet = (NetworkPacket*)malloc(sizeof(NetworkPacket) + data_size);
	if (!packet) {
		perror("malloc failed");
		return;
	}

	// 初始化
	packet->header.type = 1;
	packet->header.id = 1001;
	packet->header.length = data_size;
	packet->checksum = 0;
	memset(packet->reserved, 0, sizeof(packet->reserved));

	// 填充数据
	memset(packet->header.data, 'A', data_size);

	// 2.3 如何访问数据部分
	printf("2.2 数据访问：\n");
	printf("    数据部分地址: %p\n", (void*)packet->header.data);
	printf("    数据大小: %d\n", packet->header.length);

	// 2.4 计算校验和
	uint32_t calculate_checksum(NetworkPacket * pkt) {
		uint32_t sum = 0;
		uint8_t* bytes = (uint8_t*)pkt;
		for (size_t i = 0; i < sizeof(NetworkPacket) - sizeof(uint32_t); i++) {
			sum += bytes[i];
		}
		return sum;
	}

	packet->checksum = calculate_checksum(packet);
	printf("2.3 校验和: %u\n", packet->checksum);

	// 2.5 安全复制
	NetworkPacket* copy_packet(NetworkPacket * src) {
		if (!src) return NULL;

		size_t total_size = sizeof(NetworkPacket) + src->header.length;
		NetworkPacket* dest = (NetworkPacket*)malloc(total_size);
		if (!dest) return NULL;

		memcpy(dest, src, total_size);
		return dest;
	}

	NetworkPacket* packet_copy = copy_packet(packet);
	if (packet_copy) {
		printf("2.4 复制成功，校验和: %u\n", packet_copy->checksum);
		free(packet_copy);
	}

	free(packet);
	printf("================================\n\n");
}

//============================================================================
// * 题目3：函数指针数组与状态机
// * 考察点：函数指针、状态机、回调函数
// * 分值：10分
// * 要求：实现状态机
// ============================================================================

typedef enum 
{
	STATE_IDLE,
	STATE_CONNECTING,
	STATE_CONNECTED,
	STATE_DISCONNECTING,
	STATE_ERROR
} ConnectionState;

typedef void (*StateHandler)(void* context);

typedef struct 
{
	ConnectionState current_state;
	StateHandler handlers[5];
	void* context;
} StateMachine;

// 状态处理函数
void idle_handler(void* context) {
	printf("    处理IDLE状态\n");
}

void connecting_handler(void* context) {
	printf("    处理CONNECTING状态\n");
}

void connected_handler(void* context) {
	printf("    处理CONNECTED状态\n");
}

void disconnecting_handler(void* context) {
	printf("    处理DISCONNECTING状态\n");
}

void error_handler(void* context) {
	printf("    处理ERROR状态\n");
}

StateMachine* create_state_machine() {
	StateMachine* sm = (StateMachine*)malloc(sizeof(StateMachine));
	if (!sm) return NULL;

	sm->current_state = STATE_IDLE;
	sm->context = NULL;

	// 注册处理函数
	sm->handlers[STATE_IDLE] = idle_handler;
	sm->handlers[STATE_CONNECTING] = connecting_handler;
	sm->handlers[STATE_CONNECTED] = connected_handler;
	sm->handlers[STATE_DISCONNECTING] = disconnecting_handler;
	sm->handlers[STATE_ERROR] = error_handler;

	return sm;
}

int transition_state(StateMachine* sm, ConnectionState new_state) {
	if (!sm) return -1;
	if (new_state < STATE_IDLE || new_state > STATE_ERROR) return -2;

	printf("    状态转换: %d -> %d\n", sm->current_state, new_state);
	sm->current_state = new_state;

	// 执行状态处理函数
	if (sm->handlers[new_state]) {
		sm->handlers[new_state](sm->context);
	}

	return 0;
}

void destroy_state_machine(StateMachine* sm) {
	if (sm) {
		free(sm);
	}
}

void test_state_machine() {
	printf("=== 题目3：函数指针数组与状态机 ===\n");

	StateMachine* sm = create_state_machine();
	if (!sm) {
		printf("创建状态机失败\n");
		return;
	}

	// 测试状态转换
	transition_state(sm, STATE_CONNECTING);
	transition_state(sm, STATE_CONNECTED);
	transition_state(sm, STATE_DISCONNECTING);
	transition_state(sm, STATE_IDLE);
	transition_state(sm, STATE_ERROR);

	destroy_state_machine(sm);
	printf("================================\n\n");
}

//============================================================================
// * 题目4：二维数组的动态分配与操作
// * 考察点：二维数组、动态内存、指针数组
// * 分值：10分
// * 要求：实现矩阵操作，修复bug
// ============================================================================

typedef int** Matrix;

Matrix create_matrix(int rows, int cols) {
	if (rows <= 0 || cols <= 0) return NULL;

	// 分配行指针数组
	Matrix mat = (Matrix)malloc(rows * sizeof(int*));
	if (!mat) return NULL;

	// 分配每行的空间
	for (int i = 0; i < rows; i++) {
		mat[i] = (int*)malloc(cols * sizeof(int));
		if (!mat[i]) {
			// 如果分配失败，释放已分配的内存
			for (int j = 0; j < i; j++) {
				free(mat[j]);
			}
			free(mat);
			return NULL;
		}
	}

	return mat;
}

// 修复的matrix_operation函数
void matrix_operation(Matrix mat, int rows, int cols) {
	if (!mat || rows <= 0 || cols <= 0) return;

	for (int i = 0; i < rows; i++) {  // 修复：i < rows 而不是 i <= rows
		for (int j = 0; j < cols; j++) {
			mat[i][j] = i * cols + j;
		}
	}
}

Matrix transpose_matrix(Matrix mat, int rows, int cols) {
	if (!mat || rows <= 0 || cols <= 0) return NULL;

	Matrix transposed = create_matrix(cols, rows);
	if (!transposed) return NULL;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transposed[j][i] = mat[i][j];
		}
	}

	return transposed;
}

void free_matrix(Matrix mat, int rows) {
	if (!mat) return;

	for (int i = 0; i < rows; i++) {
		free(mat[i]);
	}
	free(mat);
}

void test_matrix() {
	printf("=== 题目4：二维数组的动态分配与操作 ===\n");

	int rows = 3, cols = 4;
	Matrix mat = create_matrix(rows, cols);
	if (!mat) {
		printf("创建矩阵失败\n");
		return;
	}

	// 填充矩阵
	matrix_operation(mat, rows, cols);

	// 打印矩阵
	printf("原始矩阵(%dx%d):\n", rows, cols);
	for (int i = 0; i < rows; i++) {
		printf("    ");
		for (int j = 0; j < cols; j++) {
			printf("%3d ", mat[i][j]);
		}
		printf("\n");
	}

	// 转置
	Matrix trans = transpose_matrix(mat, rows, cols);
	if (trans) {
		printf("\n转置矩阵(%dx%d):\n", cols, rows);
		for (int i = 0; i < cols; i++) {
			printf("    ");
			for (int j = 0; j < rows; j++) {
				printf("%3d ", trans[i][j]);
			}
			printf("\n");
		}
		free_matrix(trans, cols);
	}

	free_matrix(mat, rows);
	printf("================================\n\n");
}

//============================================================================
// * 题目5：循环与边界条件处理
// * 考察点：循环控制、边界条件、错误处理
// * 分值：10分
// * 要求：修复bug，实现安全版本
// ============================================================================

#define MAX_ITEMS 100
#define BATCH_SIZE 16

typedef struct {
	int items[MAX_ITEMS];
	int count;
} CircularBuffer;

// 原始版本（有bug）
void process_buffer(CircularBuffer* buf, int* output,
	int output_size, int batch_size) {
	int processed = 0;
	int i = 0;

	while (processed < buf->count) {
		for (int j = 0; j < batch_size; j++) {
			if (i >= buf->count) break;
			output[processed++] = buf->items[i++] * 2;
		}
		// 问题：没有检查output数组边界
	}
}

// 修复版本
int safe_process_buffer(CircularBuffer* buf, int* output,
	int output_size, int batch_size) {
	if (!buf || !output || output_size <= 0 || batch_size <= 0) {
		return -1;
	}

	int processed = 0;
	int i = 0;

	// 修复：添加所有边界检查
	while (i < buf->count && processed < output_size) {
		int items_in_batch = 0;

		// 计算本批次处理数量
		int remaining_in_buffer = buf->count - i;
		int remaining_in_output = output_size - processed;
		items_in_batch = (batch_size < remaining_in_buffer) ?
			batch_size : remaining_in_buffer;
		items_in_batch = (items_in_batch < remaining_in_output) ?
			items_in_batch : remaining_in_output;

		if (items_in_batch <= 0) break;

		// 处理批次
		for (int j = 0; j < items_in_batch; j++) {
			output[processed++] = buf->items[i++] * 2;
		}
	}

	return processed;
}

void test_circular_buffer() {
	printf("=== 题目5：循环与边界条件处理 ===\n");

	CircularBuffer buf = { 0 };
	buf.count = 20;
	for (int i = 0; i < buf.count; i++) {
		buf.items[i] = i + 1;
	}

	int output[15];  // 故意小于输入
	printf("输入大小: %d, 输出大小: %d\n", buf.count, 15);

	int processed = safe_process_buffer(&buf, output, 15, 8);
	printf("安全处理结果: 处理了 %d 个元素\n", processed);

	printf("处理后的前5个元素: ");
	for (int i = 0; i < 5 && i < processed; i++) {
		printf("%d ", output[i]);
	}
	printf("\n");
	printf("================================\n\n");
}

//============================================================================
// * 题目6：结构体嵌套与深拷贝
// * 考察点：结构体嵌套、深拷贝、内存管理
// * 分值：10分
// * 要求：实现深拷贝和内存管理
// ============================================================================

typedef struct {
	char* name;      // 动态分配
	int* scores;     // 动态分配
	int score_count;
} Student;

typedef struct {
	Student* students;  // 动态分配
	int student_count;
	int capacity;
} Classroom;

// 深拷贝Student
Student* deep_copy_student(const Student* src) {
	if (!src) return NULL;

	Student* dest = (Student*)malloc(sizeof(Student));
	if (!dest) return NULL;

	// 复制name
	if (src->name) {
		dest->name = strdup(src->name);
		if (!dest->name) {
			free(dest);
			return NULL;
		}
	}
	else {
		dest->name = NULL;
	}

	// 复制scores数组
	dest->score_count = src->score_count;
	if (src->score_count > 0 && src->scores) {
		dest->scores = (int*)malloc(src->score_count * sizeof(int));
		if (!dest->scores) {
			free(dest->name);
			free(dest);
			return NULL;
		}
		memcpy(dest->scores, src->scores, src->score_count * sizeof(int));
	}
	else {
		dest->scores = NULL;
	}

	return dest;
}

// 深拷贝Classroom
Classroom* deep_copy_classroom(const Classroom* src) {
	if (!src) return NULL;

	Classroom* dest = (Classroom*)malloc(sizeof(Classroom));
	if (!dest) return NULL;

	dest->capacity = src->capacity;
	dest->student_count = src->student_count;

	if (src->student_count > 0 && src->students) {
		dest->students = (Student*)malloc(src->student_count * sizeof(Student));
		if (!dest->students) {
			free(dest);
			return NULL;
		}

		// 深拷贝每个学生
		for (int i = 0; i < src->student_count; i++) {
			Student* student_copy = deep_copy_student(&src->students[i]);
			if (!student_copy) {
				// 拷贝失败，清理已拷贝的资源
				for (int j = 0; j < i; j++) {
					free(dest->students[j].name);
					free(dest->students[j].scores);
				}
				free(dest->students);
				free(dest);
				return NULL;
			}
			dest->students[i] = *student_copy;
			free(student_copy);
		}
	}
	else {
		dest->students = NULL;
	}

	return dest;
}

void free_student(Student* student) {
	if (student) {
		free(student->name);
		free(student->scores);
	}
}

void free_classroom(Classroom* classroom) {
	if (classroom) {
		if (classroom->students) {
			for (int i = 0; i < classroom->student_count; i++) {
				free_student(&classroom->students[i]);
			}
			free(classroom->students);
		}
		free(classroom);
	}
}

void test_deep_copy() {
	printf("=== 题目6：结构体嵌套与深拷贝 ===\n");

	// 创建原始学生
	Student stu1 = { 0 };
	stu1.name = strdup("张三");
	stu1.score_count = 3;
	stu1.scores = (int*)malloc(3 * sizeof(int));
	stu1.scores[0] = 90;
	stu1.scores[1] = 85;
	stu1.scores[2] = 92;

	// 深拷贝
	Student* stu1_copy = deep_copy_student(&stu1);
	if (stu1_copy) {
		printf("深拷贝成功:\n");
		printf("    姓名: %s\n", stu1_copy->name);
		printf("    成绩: ");
		for (int i = 0; i < stu1_copy->score_count; i++) {
			printf("%d ", stu1_copy->scores[i]);
		}
		printf("\n");

		// 修改拷贝，验证独立
		free(stu1_copy->name);
		stu1_copy->name = strdup("李四");
		printf("    修改拷贝姓名为: %s\n", stu1_copy->name);
		printf("    原始姓名仍为: %s\n", stu1.name);

		free_student(stu1_copy);
		free(stu1_copy);
	}

	free_student(&stu1);
	printf("================================\n\n");
}

//============================================================================
// * 题目7：回调函数与事件处理
// * 考察点：函数指针、回调、事件驱动
// * 分值：10分
// * 要求：实现事件分发器
// ============================================================================

typedef struct {
	int event_type;
	void* data;
	size_t data_size;
} Event;

typedef void (*EventHandler)(Event* event, void* user_data);

typedef struct {
	EventHandler* handlers;
	void** user_data;
	int capacity;
	int count;
} EventDispatcher;

EventDispatcher* create_event_dispatcher(int initial_capacity) {
	if (initial_capacity <= 0) initial_capacity = 10;

	EventDispatcher* dispatcher = (EventDispatcher*)malloc(sizeof(EventDispatcher));
	if (!dispatcher) return NULL;

	dispatcher->handlers = (EventHandler*)calloc(initial_capacity, sizeof(EventHandler));
	dispatcher->user_data = (void**)calloc(initial_capacity, sizeof(void*));
	if (!dispatcher->handlers || !dispatcher->user_data) {
		free(dispatcher->handlers);
		free(dispatcher->user_data);
		free(dispatcher);
		return NULL;
	}

	dispatcher->capacity = initial_capacity;
	dispatcher->count = 0;

	return dispatcher;
}

int register_handler(EventDispatcher* dispatcher,
	int event_type,
	EventHandler handler,
	void* user_data) {
	if (!dispatcher || event_type < 0 || event_type >= dispatcher->capacity) {
		return -1;
	}

	// 扩容检查
	if (event_type >= dispatcher->capacity) {
		int new_capacity = dispatcher->capacity * 2;
		EventHandler* new_handlers = (EventHandler*)realloc(dispatcher->handlers,
			new_capacity * sizeof(EventHandler));
		void** new_user_data = (void**)realloc(dispatcher->user_data,
			new_capacity * sizeof(void*));
		if (!new_handlers || !new_user_data) {
			return -1;
		}

		// 初始化新分配的内存
		for (int i = dispatcher->capacity; i < new_capacity; i++) {
			new_handlers[i] = NULL;
			new_user_data[i] = NULL;
		}

		dispatcher->handlers = new_handlers;
		dispatcher->user_data = new_user_data;
		dispatcher->capacity = new_capacity;
	}

	dispatcher->handlers[event_type] = handler;
	dispatcher->user_data[event_type] = user_data;
	if (event_type >= dispatcher->count) {
		dispatcher->count = event_type + 1;
	}

	return 0;
}

void trigger_event(EventDispatcher* dispatcher, Event* event) {
	if (!dispatcher || !event || event->event_type < 0) {
		return;
	}

	if (event->event_type < dispatcher->count &&
		dispatcher->handlers[event->event_type]) {
		dispatcher->handlers[event->event_type](event,
			dispatcher->user_data[event->event_type]);
	}
}

void destroy_event_dispatcher(EventDispatcher* dispatcher) {
	if (dispatcher) {
		free(dispatcher->handlers);
		free(dispatcher->user_data);
		free(dispatcher);
	}
}

// 示例事件处理函数
void button_click_handler(Event* event, void* user_data) {
	printf("    按钮点击事件: 类型=%d\n", event->event_type);
	if (event->data) {
		printf("    事件数据: %s\n", (char*)event->data);
	}
}

void test_event_dispatcher() {
	printf("=== 题目7：回调函数与事件处理 ===\n");

	EventDispatcher* dispatcher = create_event_dispatcher(10);
	if (!dispatcher) {
		printf("创建事件分发器失败\n");
		return;
	}

	// 注册事件处理器
	register_handler(dispatcher, 1, button_click_handler, NULL);
	register_handler(dispatcher, 2, button_click_handler, NULL);

	// 创建并触发事件
	Event evt1 = { 1, "按钮1被点击", strlen("按钮1被点击") + 1 };
	printf("触发事件1:\n");
	trigger_event(dispatcher, &evt1);

	Event evt2 = { 2, "按钮2被点击", strlen("按钮2被点击") + 1 };
	printf("触发事件2:\n");
	trigger_event(dispatcher, &evt2);

	// 测试未注册的事件
	Event evt3 = { 3, "未注册的事件", 0 };
	printf("触发未注册的事件3:\n");
	trigger_event(dispatcher, &evt3);

	destroy_event_dispatcher(dispatcher);
	printf("================================\n\n");
}

//============================================================================
// * 题目8：位域与标志位操作
// * 考察点：位域、位运算、宏定义
// * 分值：10分
// * 要求：比较位域和位操作
// ============================================================================

 // 版本1：使用位域
typedef union {
	struct {
		unsigned int is_valid : 1;
		unsigned int is_encrypted : 1;
		unsigned int compression_type : 2;  // 0-3
		unsigned int version : 4;           // 0-15
		unsigned int reserved : 24;
	} bits;
	uint32_t raw;
} PacketFlags;

// 版本2：使用位操作宏
#define FLAG_VALID       0x00000001
#define FLAG_ENCRYPTED   0x00000002
#define FLAG_COMPRESSION 0x0000000C  // 位2-3
#define FLAG_VERSION     0x000000F0  // 位4-7

#define SET_FLAG(flags, mask) ((flags) |= (mask))
#define CLEAR_FLAG(flags, mask) ((flags) &= ~(mask))
#define TEST_FLAG(flags, mask) (((flags) & (mask)) != 0)
#define GET_FIELD(flags, mask, shift) (((flags) & (mask)) >> (shift))
#define SET_FIELD(flags, mask, shift, value) \
    ((flags) = ((flags) & ~(mask)) | (((value) << (shift)) & (mask)))

void test_flags() {
	printf("=== 题目8：位域与标志位操作 ===\n");

	// 1. 使用位域
	printf("1. 位域版本:\n");
	PacketFlags pf1 = { .bits = {1, 1, 2, 5, 0} };
	printf("    有效位: %u\n", pf1.bits.is_valid);
	printf("    加密位: %u\n", pf1.bits.is_encrypted);
	printf("    压缩类型: %u\n", pf1.bits.compression_type);
	printf("    版本: %u\n", pf1.bits.version);
	printf("    RAW值: 0x%08X\n", pf1.raw);

	// 2. 使用位操作宏
	printf("\n2. 位操作宏版本:\n");
	uint32_t pf2 = 0;
	SET_FLAG(pf2, FLAG_VALID | FLAG_ENCRYPTED);
	SET_FIELD(pf2, FLAG_COMPRESSION, 2, 2);
	SET_FIELD(pf2, FLAG_VERSION, 4, 5);

	printf("    有效位: %u\n", TEST_FLAG(pf2, FLAG_VALID) ? 1 : 0);
	printf("    加密位: %u\n", TEST_FLAG(pf2, FLAG_ENCRYPTED) ? 1 : 0);
	printf("    压缩类型: %u\n", GET_FIELD(pf2, FLAG_COMPRESSION, 2));
	printf("    版本: %u\n", GET_FIELD(pf2, FLAG_VERSION, 4));
	printf("    RAW值: 0x%08X\n", pf2);

	// 3. 比较
	printf("\n3. 比较:\n");
	printf("    位域优点: 可读性好，编译器自动处理位操作\n");
	printf("    位域缺点: 不可移植，依赖编译器实现\n");
	printf("    宏操作优点: 可移植，精确控制位布局\n");
	printf("    宏操作缺点: 可读性差，容易出错\n");

	printf("================================\n\n");
}

//============================================================================
// * 题目9：多级指针与动态数据结构
// * 考察点：多级指针、链表、树
// * 分值：10分
// * 要求：实现树结构
// ============================================================================

typedef struct TreeNode {
	int value;
	struct TreeNode** children;  // 动态分配的指针数组
	int child_count;
	int capacity;
} TreeNode;

typedef struct {
	TreeNode* root;
	int (*compare)(int a, int b);  // 比较函数指针
	int node_count;
} Tree;

// 比较函数
int default_compare(int a, int b) {
	return a - b;
}

TreeNode* create_node(int value) {
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	if (!node) return NULL;

	node->value = value;
	node->children = NULL;
	node->child_count = 0;
	node->capacity = 0;

	return node;
}

Tree* create_tree(int (*compare_func)(int, int)) {
	Tree* tree = (Tree*)malloc(sizeof(Tree));
	if (!tree) return NULL;

	tree->root = NULL;
	tree->compare = compare_func ? compare_func : default_compare;
	tree->node_count = 0;

	return tree;
}

int add_child(TreeNode* parent, TreeNode* child) {
	if (!parent || !child) return -1;

	// 需要扩容
	if (parent->child_count >= parent->capacity) {
		int new_capacity = parent->capacity == 0 ? 4 : parent->capacity * 2;
		TreeNode** new_children = (TreeNode**)realloc(parent->children,
			new_capacity * sizeof(TreeNode*));
		if (!new_children) return -1;

		parent->children = new_children;
		parent->capacity = new_capacity;
	}

	parent->children[parent->child_count++] = child;
	return 0;
}

void traverse_preorder(TreeNode* node, void (*visit)(TreeNode*)) {
	if (!node || !visit) return;

	visit(node);
	for (int i = 0; i < node->child_count; i++) {
		traverse_preorder(node->children[i], visit);
	}
}

void print_node(TreeNode* node) {
	if (node) {
		printf("    %d (有 %d 个子节点)\n", node->value, node->child_count);
	}
}

void free_node(TreeNode* node) {
	if (!node) return;

	// 递归释放子节点
	for (int i = 0; i < node->child_count; i++) {
		free_node(node->children[i]);
	}

	free(node->children);
	free(node);
}

void free_tree(Tree* tree) {
	if (tree) {
		free_node(tree->root);
		free(tree);
	}
}

void test_tree() {
	printf("=== 题目9：多级指针与动态数据结构 ===\n");

	Tree* tree = create_tree(NULL);
	if (!tree) {
		printf("创建树失败\n");
		return;
	}

	// 创建节点
	TreeNode* root = create_node(1);
	TreeNode* child1 = create_node(2);
	TreeNode* child2 = create_node(3);
	TreeNode* grandchild1 = create_node(4);
	TreeNode* grandchild2 = create_node(5);

	if (!root || !child1 || !child2 || !grandchild1 || !grandchild2) {
		printf("创建节点失败\n");
		free_tree(tree);
		return;
	}

	// 构建树结构
	tree->root = root;
	add_child(root, child1);
	add_child(root, child2);
	add_child(child1, grandchild1);
	add_child(child1, grandchild2);

	// 遍历
	printf("树结构（前序遍历）:\n");
	traverse_preorder(root, print_node);

	free_tree(tree);
	printf("================================\n\n");
}

//============================================================================
// * 题目10：工程实践综合题
// * 考察点：综合应用、设计模式、模块化
// * 分值：10分
// * 要求：设计数据库接口
// ============================================================================

 // 列类型枚举
typedef enum 
{
	COLUMN_TYPE_INT,
	COLUMN_TYPE_FLOAT,
	COLUMN_TYPE_STRING,
	COLUMN_TYPE_BOOL
} ColumnType;

// 列定义
typedef struct 
{
	char name[50];
	ColumnType type;
	int size;          // 对于字符串类型，表示最大长度
	int offset;        // 在行中的偏移量
} Column;

// 行数据
typedef struct 
{
	void* data;        // 存储所有列的数据
	int row_size;      // 行数据总大小
} Row;

// 表定义
typedef struct 
{
	char name[50];
	Column* columns;
	int column_count;
	Row* rows;
	int row_count;
	int capacity;
} DataTable;

// 计算行大小
int calculate_row_size(Column* columns, int column_count) 
{
	int size = 0;
	for (int i = 0; i < column_count; i++) 
	{
		switch (columns[i].type) 
		{
		case COLUMN_TYPE_INT:    size += sizeof(int); break;
		case COLUMN_TYPE_FLOAT:  size += sizeof(float); break;
		case COLUMN_TYPE_BOOL:   size += sizeof(char); break;
		case COLUMN_TYPE_STRING: size += columns[i].size; break;
		}
		columns[i].offset = size;
	}
	return size;
}

// 创建表
DataTable* create_table(const char* name, Column* columns, int column_count) 
{
	if (!name || !columns || column_count <= 0) return NULL;

	DataTable* table = (DataTable*)malloc(sizeof(DataTable));
	if (!table) return NULL;

	strncpy(table->name, name, sizeof(table->name) - 1);
	table->name[sizeof(table->name) - 1] = '\0';

	table->columns = (Column*)malloc(column_count * sizeof(Column));
	if (!table->columns) 
	{
		free(table);
		return NULL;
	}

	memcpy(table->columns, columns, column_count * sizeof(Column));
	table->column_count = column_count;

	// 计算行大小并更新偏移量
	calculate_row_size(table->columns, table->column_count);

	table->rows = NULL;
	table->row_count = 0;
	table->capacity = 0;

	return table;
}

// 插入行
int insert_row(DataTable* table, void** values) 
{
	if (!table || !values) return -1;

	// 扩容检查
	if (table->row_count >= table->capacity) 
	{
		int new_capacity = table->capacity == 0 ? 10 : table->capacity * 2;
		Row* new_rows = (Row*)realloc(table->rows, new_capacity * sizeof(Row));
		if (!new_rows) return -1;

		table->rows = new_rows;
		table->capacity = new_capacity;
	}

	// 计算当前行大小
	int row_size = 0;
	if (table->column_count > 0)
	{
		row_size = table->columns[table->column_count - 1].offset;
	}

	// 分配行数据
	Row* row = &table->rows[table->row_count];
	row->data = malloc(row_size);
	if (!row->data) return -1;

	row->row_size = row_size;

	// 复制数据
	for (int i = 0; i < table->column_count; i++) 
	{
		void* dest = (char*)row->data + table->columns[i].offset;
		switch (table->columns[i].type) 
		{
		case COLUMN_TYPE_INT:
			*(int*)dest = *(int*)values[i];
			break;
		case COLUMN_TYPE_FLOAT:
			*(float*)dest = *(float*)values[i];
			break;
		case COLUMN_TYPE_BOOL:
			*(char*)dest = *(char*)values[i];
			break;
		case COLUMN_TYPE_STRING:
			strncpy((char*)dest, (char*)values[i], table->columns[i].size - 1);
			((char*)dest)[table->columns[i].size - 1] = '\0';
			break;
		}
	}

	table->row_count++;
	return table->row_count - 1;  // 返回行索引
}

// 查询条件
typedef struct 
{
	int column_index;
	ColumnType type;
	void* value;
	int (*compare)(void*, void*);
} QueryCondition;

// 查询行
Row* query_rows(DataTable* table, QueryCondition* conditions,
	int condition_count, int* result_count) 
{
	if (!table || !result_count) return NULL;

	// 临时存储匹配的行
	Row* results = NULL;
	int match_count = 0;
	int capacity = 0;

	for (int i = 0; i < table->row_count; i++) {
		Row* row = &table->rows[i];
		int match = 1;

		// 检查所有条件
		for (int j = 0; j < condition_count && match; j++) {
			QueryCondition* cond = &conditions[j];
			if (cond->column_index < 0 || cond->column_index >= table->column_count) {
				match = 0;
				break;
			}

			void* cell_data = (char*)row->data + table->columns[cond->column_index].offset;

			if (cond->compare) {
				match = cond->compare(cell_data, cond->value);
			}
			else {
				// 默认比较
				switch (cond->type) {
				case COLUMN_TYPE_INT:
					match = (*(int*)cell_data == *(int*)cond->value);
					break;
				case COLUMN_TYPE_FLOAT:
					match = (*(float*)cell_data == *(float*)cond->value);
					break;
				case COLUMN_TYPE_BOOL:
					match = (*(char*)cell_data == *(char*)cond->value);
					break;
				case COLUMN_TYPE_STRING:
					match = (strcmp((char*)cell_data, (char*)cond->value) == 0);
					break;
				}
			}
		}

		if (match) {
			// 需要扩容
			if (match_count >= capacity) {
				int new_capacity = capacity == 0 ? 4 : capacity * 2;
				Row* new_results = (Row*)realloc(results, new_capacity * sizeof(Row));
				if (!new_results) {
					free(results);
					*result_count = 0;
					return NULL;
				}
				results = new_results;
				capacity = new_capacity;
			}

			// 深拷贝匹配的行
			results[match_count].data = malloc(row->row_size);
			if (!results[match_count].data) {
				for (int k = 0; k < match_count; k++) {
					free(results[k].data);
				}
				free(results);
				*result_count = 0;
				return NULL;
			}
			memcpy(results[match_count].data, row->data, row->row_size);
			results[match_count].row_size = row->row_size;
			match_count++;
		}
	}

	*result_count = match_count;
	return results;
}

// 释放表
void free_table(DataTable* table) {
	if (!table) return;

	if (table->rows) {
		for (int i = 0; i < table->row_count; i++) {
			free(table->rows[i].data);
		}
		free(table->rows);
	}

	free(table->columns);
	free(table);
}

void test_database() {
	printf("=== 题目10：工程实践综合题 ===\n");

	// 定义表结构
	Column columns[] = {
		{"id", COLUMN_TYPE_INT, sizeof(int), 0},
		{"name", COLUMN_TYPE_STRING, 50, 0},
		{"age", COLUMN_TYPE_INT, sizeof(int), 0},
		{"salary", COLUMN_TYPE_FLOAT, sizeof(float), 0}
	};
	int column_count = sizeof(columns) / sizeof(columns[0]);

	// 创建表
	DataTable* table = create_table("employees", columns, column_count);
	if (!table) {
		printf("创建表失败\n");
		return;
	}

	// 插入数据
	printf("插入数据:\n");
	for (int i = 0; i < 5; i++) {
		char name[50];
		sprintf(name, "Employee%d", i + 1);

		void* values[] = { &i, name, &i, &i };
		int row_index = insert_row(table, values);
		if (row_index >= 0) {
			printf("    插入行 %d: id=%d, name=%s\n", row_index, i, name);
		}
	}

	// 查询数据
	printf("\n查询年龄大于2的员工:\n");
	int age_condition = 2;
	QueryCondition conditions[] = {
		{2, COLUMN_TYPE_INT, &age_condition, NULL}
	};

	int result_count = 0;
	Row* results = query_rows(table, conditions, 1, &result_count);

	if (results) {
		printf("    找到 %d 条记录:\n", result_count);
		for (int i = 0; i < result_count; i++) {
			Row* row = &results[i];
			int id = *(int*)((char*)row->data + table->columns[0].offset);
			char* name = (char*)((char*)row->data + table->columns[1].offset);
			int age = *(int*)((char*)row->data + table->columns[2].offset);
			printf("        id=%d, name=%s, age=%d\n", id, name, age);
		}

		// 释放查询结果
		for (int i = 0; i < result_count; i++) {
			free(results[i].data);
		}
		free(results);
	}

	free_table(table);
	printf("================================\n\n");
}

int main() {
	printf("================================================================\n");
	printf("             C语言工程能力测试题\n");
	printf("================================================================\n\n");

	// 运行所有测试
	test_macro_pointer();          // 题目1
	analyze_packet();              // 题目2
	test_state_machine();          // 题目3
	test_matrix();                 // 题目4
	test_circular_buffer();        // 题目5
	test_deep_copy();              // 题目6
	test_event_dispatcher();       // 题目7
	test_flags();                  // 题目8
	test_tree();                   // 题目9
	test_database();               // 题目10

	printf("================================================================\n");
	printf("            所有测试完成！\n");
	printf("================================================================\n");

	return 0;
}