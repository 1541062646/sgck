# 智能水果仓储管理系统
## Intelligent Fruit Storage Management System

![System Architecture](system-architecture.png) <!-- 建议添加系统架构图 -->

基于Arduino与Web技术的智能仓储环境监测系统，适用于水果等生鲜产品的储存环境管理。

### 功能特性 ✨
- 🌡️ 多参数实时监测（温湿度、CO/CO₂、光照）
- 📊 Web可视化仪表盘
- ⚠️ 智能阈值预警系统
- 🤖 基于AI的保鲜建议分析
- 🔒 API密钥安全存储
- 📱 响应式网页设计

### 硬件要求 🛠️
| 组件            | 型号       | 数量 |
|-----------------|------------|-----|
| 主控板          | Arduino Uno R3 | 1   |
| 温湿度传感器    | DHT22      | 1   |
| 光照传感器      | BH1750     | 1   |
| 气体传感器      | MQ7        | 1   |
| 气体传感器      | MQ135      | 1   |
| 杜邦线          | -          | 若干 |

### 软件依赖 📦
1. Arduino IDE (1.8.x或更新版本)
2. 所需库文件：
   - DHT-sensor-library
   - Wire
   - BH1750

### 安装步骤 🚀

#### 硬件端部署
1. 按电路图连接传感器
2. 上传`FruitStorage.ino`到Arduino
3. 保持USB连接至监控计算机

#### 网页端部署
```bash
# 克隆仓库
git clone https://github.com/your-repo/fruit-storage-system.git

# 进入目录
cd fruit-storage-system

# 直接双击打开web-interface.html
# 智能水果仓储管理系统
## Intelligent Fruit Storage Management System

![System Architecture](system-architecture.png) 

基于Arduino与Web技术的智能仓储环境监测系统，适用于水果等生鲜产品的储存环境管理。

### 功能特性 ✨
- 🌡️ 多参数实时监测（温湿度、CO/CO₂、光照）
- 📊 Web可视化仪表盘
- ⚠️ 智能阈值预警系统
- 🤖 基于AI的保鲜建议分析
- 🔒 API密钥安全存储
- 📱 响应式网页设计

### 硬件要求 🛠️
| 组件            | 型号       | 数量 |
|-----------------|------------|-----|
| 主控板          | Arduino Uno R3 | 1   |
| 温湿度传感器    | DHT22      | 1   |
| 光照传感器      | BH1750     | 1   |
| 气体传感器      | MQ7        | 1   |
| 气体传感器      | MQ135      | 1   |
| 杜邦线          | -          | 若干 |

### 软件依赖 📦
1. Arduino IDE (1.8.x或更新版本)
2. 所需库文件：
   - DHT-sensor-library
   - Wire
   - BH1750

### 安装步骤 🚀

#### 硬件端部署
1. 按电路图连接传感器
2. 上传`FruitStorage.ino`到Arduino
3. 保持USB连接至监控计算机

#### 网页端部署
```bash
# 克隆仓库
git clone https://github.com/your-repo/fruit-storage-system.git

# 进入目录
cd fruit-storage-system

# 直接双击打开web-interface.html

