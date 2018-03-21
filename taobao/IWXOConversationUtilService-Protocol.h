//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWMessage, WXOMessageUpdateManager, YWMessageBody;

@protocol IWXOConversationUtilService <NSObject>
@property(retain, nonatomic) WXOMessageUpdateManager *messageUpdateManager;
- (YWMessageBody *)makeMessageBodyWithWWMessage:(WWMessage *)arg1;
- (unsigned long long)convertWXMessageStatusToWXOMessageSendStatus:(int)arg1;
- (WWMessage *)wwmessageWithMessageId:(NSString *)arg1;
@end
