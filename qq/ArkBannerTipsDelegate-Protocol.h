//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class ArkUIView, NSString, QQAIOMsgModel, UIImage;

@protocol ArkBannerTipsDelegate <NSObject>

@optional
- (NSString *)getChatViewUin;
- (QQAIOMsgModel *)getArkAppModelWithArkUIView:(ArkUIView *)arg1;
- (void)dismissChatViewBarWithUin:(NSString *)arg1;
- (void)showChatViewBarTitle:(NSString *)arg1 icon:(UIImage *)arg2 chatViewUin:(NSString *)arg3;
@end

