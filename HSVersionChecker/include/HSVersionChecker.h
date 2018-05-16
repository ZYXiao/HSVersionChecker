//
//  HSVersionChecker.h
//  HSVersionChecker
//
//  Created by 晓哥 on 2018/5/16.
//  Copyright © 2018年 恒生云融. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HSVersionChecker : NSObject

/**
 单例方法
 
 @return 单例对象
 */
+ (HSVersionChecker *)defaultChecker;

/**
 检查版本更新
 
 @param appID appID（必需）
 @param serverUrl 服务url（必需）
 @param certPath 用于加密的公钥证书路径（必需）
 */
- (void)checkUpdateWithAppID:(NSString *)appID serverUrl:(NSString *)serverUrl certPath:(NSString *)certPath;

@end
