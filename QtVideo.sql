/*
 Navicat Premium Data Transfer

 Source Server         : team2111
 Source Server Type    : MySQL
 Source Server Version : 80033
 Source Host           : 43.143.229.40:3306
 Source Schema         : QtVideo

 Target Server Type    : MySQL
 Target Server Version : 80033
 File Encoding         : 65001

 Date: 05/04/2024 09:37:04
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for manager
-- ----------------------------
DROP TABLE IF EXISTS `manager`;
CREATE TABLE `manager`  (
  `id` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '管理员id',
  `pwd` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '管理员密码',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of manager
-- ----------------------------
INSERT INTO `manager` VALUES ('123', '123');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users`  (
  `user_id` varchar(55) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NOT NULL COMMENT '用户账号',
  `user_pwd` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户密码',
  `class` varchar(25) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户身份',
  `user_avatar_url` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户头像',
  `gender` varchar(10) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '用户性别',
  `timeless` varchar(100) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '会员过期时间',
  PRIMARY KEY (`user_id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES ('111', '111', '1', 'http://43.143.229.40:9000/blog/dog4.jpg', '男', '0');
INSERT INTO `users` VALUES ('222', '222', '2', 'http://43.143.229.40:9000/blog/dog2.jpg', '男', '2024-12-31');
INSERT INTO `users` VALUES ('333', '333', '2', 'http://43.143.229.40:9000/blog/dog5.jpg', '男', '2024-12-31');
INSERT INTO `users` VALUES ('666', '666', '2', 'http://43.143.229.40:9000/blog/dog7.jpg', '男', '2024-12-31');
INSERT INTO `users` VALUES ('777', '777', '2', 'http://43.143.229.40:9000/blog/dog4.jpg', '男', '2024-12-31');
INSERT INTO `users` VALUES ('888', '888', '1', 'http://43.143.229.40:9000/blog/dog5.jpg', '男', '0');
INSERT INTO `users` VALUES ('999', '999', '1', 'http://43.143.229.40:9000/blog/dog5.jpg', '男', '0');

-- ----------------------------
-- Table structure for video_message
-- ----------------------------
DROP TABLE IF EXISTS `video_message`;
CREATE TABLE `video_message`  (
  `video_id` varchar(25) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '视频id',
  `user_id` varchar(25) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '评论者的id',
  `message` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '视频评论',
  `time` varchar(255) CHARACTER SET utf8mb3 COLLATE utf8mb3_general_ci NULL DEFAULT NULL COMMENT '评论时间'
) ENGINE = InnoDB CHARACTER SET = utf8mb3 COLLATE = utf8mb3_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of video_message
-- ----------------------------
INSERT INTO `video_message` VALUES ('1001', '120099', '好看', '2024-04-04 18:51:25');
INSERT INTO `video_message` VALUES ('1001', '120099', '不错', '2024-04-05 08:40:26');

-- ----------------------------
-- Table structure for videos
-- ----------------------------
DROP TABLE IF EXISTS `videos`;
CREATE TABLE `videos`  (
  `video_name` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频名字',
  `video_url` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频url',
  `video_avatar_url` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频封面url',
  `video_class` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频分类',
  `video_id` int NOT NULL COMMENT '视频id号',
  `video_length` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频时长',
  `video_brief_introduction` varchar(1000) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频简介',
  `video_title` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '视频标题',
  PRIMARY KEY (`video_id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = DYNAMIC;

-- ----------------------------
-- Records of videos
-- ----------------------------
INSERT INTO `videos` VALUES ('太极1', 'http://43.143.229.40:9000/taiji/taiji_1.mp4', 'http://43.143.229.40:9000/taiji/taiji_1.png', '太极', 1001, '0:11', '这是太极拳的开端动作，通过身体放松自然的站立姿势和双手提起至胸前的动作，帮助练习者调整呼吸，集中精神，准备进入太极的世界。', '太极第一式起式');
INSERT INTO `videos` VALUES ('太极2', 'http://43.143.229.40:9000/taiji/taiji_2.mp4', 'http://43.143.229.40:9000/taiji/taiji_2.png', '太极', 1002, '0:26', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第二式左右野马分鬃');
INSERT INTO `videos` VALUES ('太极3', 'http://43.143.229.40:9000/taiji/taiji_3.mp4', 'http://43.143.229.40:9000/taiji/taiji_3.png', '太极', 1003, '0:07', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第三式白鹤亮翅');
INSERT INTO `videos` VALUES ('太极4', 'http://43.143.229.40:9000/taiji/taiji_4.mp4', 'http://43.143.229.40:9000/taiji/taiji_4.png', '太极', 1004, '0:25', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第四式左右搂膝拗步');
INSERT INTO `videos` VALUES ('太极5', 'http://43.143.229.40:9000/taiji/taiji_5.mp4', 'http://43.143.229.40:9000/taiji/taiji_5.png', '太极', 1005, '0:06', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第五式手挥琵琶');
INSERT INTO `videos` VALUES ('太极6', 'http://43.143.229.40:9000/taiji/taiji_6.mp4', 'http://43.143.229.40:9000/taiji/taiji_6.png', '太极', 1006, '0:32', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第六式左右倒卷肱');
INSERT INTO `videos` VALUES ('太极7', 'http://43.143.229.40:9000/taiji/taiji_7.mp4', 'http://43.143.229.40:9000/taiji/taiji_7.png', '太极', 1007, '0:24', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第七式左揽雀尾');
INSERT INTO `videos` VALUES ('太极8', 'http://43.143.229.40:9000/taiji/taiji_8.mp4', 'http://43.143.229.40:9000/taiji/taiji_8.png', '太极', 1008, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第八式右揽雀尾');
INSERT INTO `videos` VALUES ('太极9', 'http://43.143.229.40:9000/taiji/taiji_9.mp4', 'http://43.143.229.40:9000/taiji/taiji_9.png', '太极', 1009, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第九式单鞭');
INSERT INTO `videos` VALUES ('太极10', 'http://43.143.229.40:9000/taiji/taiji_10.mp4', 'http://43.143.229.40:9000/taiji/taiji_10.png', '太极', 1010, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十式云手');
INSERT INTO `videos` VALUES ('太极11', 'http://43.143.229.40:9000/taiji/taiji_11.mp4', 'http://43.143.229.40:9000/taiji/taiji_11.png', '太极', 1011, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十一式高探马');
INSERT INTO `videos` VALUES ('太极12', 'http://43.143.229.40:9000/taiji/taiji_12.mp4', 'http://43.143.229.40:9000/taiji/taiji_12.png', '太极', 1012, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十二式右蹬脚');
INSERT INTO `videos` VALUES ('太极13', 'http://43.143.229.40:9000/taiji/taiji_13.mp4', 'http://43.143.229.40:9000/taiji/taiji_13.png', '太极', 1013, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十三式左蹬脚');
INSERT INTO `videos` VALUES ('太极14', 'http://43.143.229.40:9000/taiji/taiji_14.mp4', 'http://43.143.229.40:9000/taiji/taiji_14.png', '太极', 1014, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十四式左右下势独立');
INSERT INTO `videos` VALUES ('太极15', 'http://43.143.229.40:9000/taiji/taiji_15.mp4', 'http://43.143.229.40:9000/taiji/taiji_15.png', '太极', 1015, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十五式左右穿梭');
INSERT INTO `videos` VALUES ('太极16', 'http://43.143.229.40:9000/taiji/taiji_16.mp4', 'http://43.143.229.40:9000/taiji/taiji_16.png', '太极', 1016, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十六式海底针');
INSERT INTO `videos` VALUES ('太极17', 'http://43.143.229.40:9000/taiji/taiji_17.mp4', 'http://43.143.229.40:9000/taiji/taiji_17.png', '太极', 1017, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十七式闪通背');
INSERT INTO `videos` VALUES ('太极18', 'http://43.143.229.40:9000/taiji/taiji_18.mp4', 'http://43.143.229.40:9000/taiji/taiji_18.png', '太极', 1018, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十八式左右搬拦捶');
INSERT INTO `videos` VALUES ('太极19', 'http://43.143.229.40:9000/taiji/taiji_19.mp4', 'http://43.143.229.40:9000/taiji/taiji_19.png', '太极', 1019, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第十九式如封似闭');
INSERT INTO `videos` VALUES ('太极20', 'http://43.143.229.40:9000/taiji/taiji_20.mp4', 'http://43.143.229.40:9000/taiji/taiji_20.png', '太极', 1020, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第二十式十字手');
INSERT INTO `videos` VALUES ('太极21', 'http://43.143.229.40:9000/taiji/taiji_21.mp4', 'http://43.143.229.40:9000/taiji/taiji_21.png', '太极', 1021, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第二十一式抱虎归山');
INSERT INTO `videos` VALUES ('太极22', 'http://43.143.229.40:9000/taiji/taiji_22.mp4', 'http://43.143.229.40:9000/taiji/taiji_22.png', '太极', 1022, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第二十二式斜飞势');
INSERT INTO `videos` VALUES ('太极23', 'http://43.143.229.40:9000/taiji/taiji_23.mp4', 'http://43.143.229.40:9000/taiji/taiji_23.png', '太极', 1023, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第二十三式左右摇身式');
INSERT INTO `videos` VALUES ('太极24', 'http://43.143.229.40:9000/taiji/taiji_24.mp4', 'http://43.143.229.40:9000/taiji/taiji_24.png', '太极', 1024, '0:28', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极第二十四式收势');
INSERT INTO `videos` VALUES ('太极25', 'http://43.143.229.40:9000/taiji/taiji_all.mp4', 'http://43.143.229.40:9000/taiji/taiji_1.png', '太极', 1025, '5:45', '太极拳是一种中国传统的武术，它起源于中国，具有丰富的文化内涵和深厚的历史底蕴。太极拳不仅是一种防身技艺，更是一种养生之道，它融合了中国传统文化中的儒、道哲学思想，以及阴阳五行的变化原理。太极拳强调内外兼修，通过柔和、缓慢、轻灵的动作，达到强身健体、陶冶性情的效果。', '太极全式');
INSERT INTO `videos` VALUES ('健身操', 'http://43.143.229.40:9000/taiji/aerobics.mp4', 'http://43.143.229.40:9000/taiji/aerobics.png', '健身操', 2001, '17:46', '帕梅拉新手入门健身操，3分钟热身+15分钟有氧。全程站立，简单', '健身操');
INSERT INTO `videos` VALUES ('塑形0', 'http://43.143.229.40:9000/taiji/Get_in_shape0.mp4', 'http://43.143.229.40:9000/taiji/Get_in_shape0.png', '塑形', 3001, '13:52', '全身有氧（无跳跃、低强度）是指通过一系列中低强度的锻炼，以增强心肺功能和耐力为目标的运动方式。', '全身有氧');
INSERT INTO `videos` VALUES ('塑形1', 'http://43.143.229.40:9000/taiji/Get_in_shape1.mp4', 'http://43.143.229.40:9000/taiji/Get_in_shape1.png', '塑形', 3002, '18:14', '全身锻炼对新手来说是一个很好的起点，它可以帮助新手建立良好的运动基础，增加肌肉量，并获得良好的运动能力。', '全身锻炼');
INSERT INTO `videos` VALUES ('塑形2', 'http://43.143.229.40:9000/taiji/Get_in_shape2.mp4', 'http://43.143.229.40:9000/taiji/Get_in_shape2.png', '塑形', 3003, '16:45', '臀部锻炼是非常重要的，因为臀部肌肉是身体的最大肌肉群之一，对于保持身体的良好姿势和平衡以及改善体型都非常有帮助。', '臀部锻炼');
INSERT INTO `videos` VALUES ('塑形3', 'http://43.143.229.40:9000/taiji/Get_in_shape3.mp4', 'http://43.143.229.40:9000/taiji/Get_in_shape3.png', '塑形', 3004, '18:24', '上身锻炼对于新手来说，选择合适的动作和适当的强度非常重要，以确保运动的安全性和有效性。', '上身锻炼');
INSERT INTO `videos` VALUES ('塑形4', 'http://43.143.229.40:9000/taiji/Get_in_shape4.mp4', 'http://43.143.229.40:9000/taiji/Get_in_shape4.png', '塑形', 3005, '19:17', '塑形的腹部训练是指通过一系列针对腹部肌肉的训练方法，来减少腹部脂肪、增强腹肌力量和紧实腹部肌肉的过程。这些训练方法包括有氧运动、力量训练和核心训练等。', '腹部锻炼1');
INSERT INTO `videos` VALUES ('塑形5', 'http://43.143.229.40:9000/taiji/Get_in_shape5.mp4', 'http://43.143.229.40:9000/taiji/Get_in_shape5.png', '塑形', 3006, '13:33', '塑形的腹部训练是指通过一系列针对腹部肌肉的训练方法，来减少腹部脂肪、增强腹肌力量和紧实腹部肌肉的过程。这些训练方法包括有氧运动、力量训练和核心训练等。', '腹部锻炼2');
INSERT INTO `videos` VALUES ('瑜伽0', 'http://43.143.229.40:9000/taiji/yoga0.mp4', 'http://43.143.229.40:9000/taiji/yuga0.png', '瑜伽', 4001, '29:47', '瑜伽中的背部伸展动作有助于增强背部的力量和柔韧性，同时可以缓解背部疼痛。', '背部苏展');
INSERT INTO `videos` VALUES ('瑜伽1', 'http://43.143.229.40:9000/taiji/yoga1.mp4', 'http://43.143.229.40:9000/taiji/yuga1.png', '瑜伽', 4002, '29:26', '瑜伽平衡入门主要涉及基础体式练习、呼吸与冥想技巧，以及身心协调。', '平衡入门');

SET FOREIGN_KEY_CHECKS = 1;
