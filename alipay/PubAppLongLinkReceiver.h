//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PPSendMessageNotifyDelegate-Protocol.h"

@class NSMutableArray, NSString, PubSendMessage;
@protocol MessagePretreatment, OS_dispatch_queue;

@interface PubAppLongLinkReceiver : NSObject <PPSendMessageNotifyDelegate>
{
    NSMutableArray *_registerManage;
    NSString *_userId;
    id <MessagePretreatment> _pretreatmentDelegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    PubSendMessage *_sendMessage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PubSendMessage *sendMessage; // @synthesize sendMessage=_sendMessage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <MessagePretreatment> pretreatmentDelegate; // @synthesize pretreatmentDelegate=_pretreatmentDelegate;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSMutableArray *registerManage; // @synthesize registerManage=_registerManage;
- (void).cxx_destruct;
- (_Bool)bImgSendToFTP:(id)arg1;
- (void)pubSendMessageNotify:(id)arg1;
- (void)pubSendMessage:(id)arg1 message:(id)arg2;
- (int)pubSaveMessageAndNotify:(id)arg1 appId:(id)arg2 mId:(id)arg3;
- (id)sendMessage:(id)arg1 appId:(id)arg2 userId:(id)arg3 mId:(id)arg4;
- (_Bool)pretreatmentPubMessageSava:(id)arg1;
- (void)pretreatmentPubMessage:(id)arg1;
- (void)checkOperation:(id)arg1 changeMessage:(id)arg2;
- (void)handlePublicInfo:(id)arg1 syncOperation:(id)arg2;
- (_Bool)handleCCMessage:(id)arg1;
- (id)convertAndSave:(id)arg1 syncOperation:(id)arg2;
- (void)processPostMessgae:(id)arg1 userID:(id)arg2;
- (_Bool)shouldAcceptMessage:(id)arg1 forPublicId:(id)arg2;
- (void)longLinkNotifyWithBizId:(id)arg1;
- (void)ungisterReceiver;
- (void)registerReceiver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
