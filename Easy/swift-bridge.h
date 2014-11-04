//
//  swift-bridge.h
//  swiftTest
//
//  Created by zhuchao on 14-7-15.
//  Copyright (c) 2014 year zhuchao. All rights reserved.
//

#import "Action.h"
#import "Scene.h"
#import "Model.h"
#import "SceneModel.h"
#import "SceneCollectionView.h"
#import "SceneScrollView.h"
#import "SceneTableView.h"
#import "EzMiButton.h"
#import "DialogUtil.h"
#import "Request.h"
#import "UIView+FLKAutoLayout.h"
#import "UIScrollView+CoverView.h"
#import "UICKeyChainStore.h"
#import "GCDObjC.h"
#import "RegExCategories.h"
#import "TMCache.h"
#import "SHGestureRecognizerBlocks.h"
#import "AFNetworking.h"
#import "RTLabel.h"
#import "ShowCamera.h"

#ifdef DEBUG
#define EZLog(...) NSLog(__VA_ARGS__)
#else
#define EZLog(...)
#endif

#define EZFRAME(frame)     EZLog(@"%.1f,%.1f,%.1f,%.1f",frame.origin.x,frame.origin.y,frame.size.width,frame.size.height);

//以下配置为调用Action 类必须 配置
//#define HOST_CONFIG 1
//#define HOST_URL @"test-leway.zjseek.com.cn:8000" //服务端域名:端口
//#define CLIENT   @"easyIOS"                       //自定义客户端识别
//#define BASE_URL @"/api/"                         //基础路由，如无基础路由可为空
//#define CODE_KEY @"code"                          //错误码key,支持路径 如 data/code
//#define RIGHT_CODE 0                              //正确校验码
//#define MSG_KEY  @"msg"                           //消息提示msg,支持路径 如 data/msg
//#endif
