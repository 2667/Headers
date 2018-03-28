//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWELiveMessagePollingEngineDelegate-Protocol.h"
#import "AWELiveRequestProtocol-Protocol.h"

@class AWELiveEventMessageQueue, AWELiveMessagePollingEngine, NSMutableOrderedSet, NSNumber, NSString;
@protocol AWELiveMessageProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface AWELiveEventEngine : NSObject <AWELiveRequestProtocol, AWELiveMessagePollingEngineDelegate>
{
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_uid;
    NSString *_did;
    NSString *_startRoomMemory;
    AWELiveMessagePollingEngine *_pollingEngine;
    id <AWELiveMessageProtocol> _observer;
    NSNumber *_roomID;
    NSMutableOrderedSet *_duplicatedSet;
    AWELiveEventMessageQueue *_messageQueue;
    long long _totalMsgCnt;
    long long _overMsgCnt;
    long long _ownMsgCnt;
    long long _dupMsgCnt;
}

+ (id)getMessageIDFromDict:(id)arg1;
+ (id)getMessageMethodFromDict:(id)arg1;
+ (id)messageFromDict:(id)arg1;
+ (void)getHotRoomCountWithFinishBlock:(CDUnknownBlockType)arg1;
+ (void)getHotRoomListWithParams:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (void)getRoomTopUserList:(id)arg1 offset:(long long)arg2 count:(long long)arg3 withCoin:(_Bool)arg4 finishBlock:(CDUnknownBlockType)arg5;
+ (void)sendBarrage:(id)arg1 content:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)sendPresent:(id)arg1 presentID:(id)arg2 count:(long long)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (id)getPresentList:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (void)getEndInfo:(id)arg1 type:(long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)getDiggIconListWithFinishBlock:(CDUnknownBlockType)arg1;
+ (void)getUserSilentState:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)share:(id)arg1 target:(long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)digg:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (void)getSilentUserList:(id)arg1 offset:(long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)kickOutUser:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)unsilentUser:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)silentUser:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)chat:(id)arg1 content:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)getRoomInfo:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (void)exitRoom:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (id)updateState:(long long)arg1 roomID:(id)arg2 streamID:(id)arg3 reason:(id)arg4 finishBlock:(CDUnknownBlockType)arg5;
+ (id)updateState:(long long)arg1 roomID:(id)arg2 streamID:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)enterRoom:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (void)createRoom:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long dupMsgCnt; // @synthesize dupMsgCnt=_dupMsgCnt;
@property(nonatomic) long long ownMsgCnt; // @synthesize ownMsgCnt=_ownMsgCnt;
@property(nonatomic) long long overMsgCnt; // @synthesize overMsgCnt=_overMsgCnt;
@property(nonatomic) long long totalMsgCnt; // @synthesize totalMsgCnt=_totalMsgCnt;
@property(retain, nonatomic) AWELiveEventMessageQueue *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) NSMutableOrderedSet *duplicatedSet; // @synthesize duplicatedSet=_duplicatedSet;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) __weak id <AWELiveMessageProtocol> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) AWELiveMessagePollingEngine *pollingEngine; // @synthesize pollingEngine=_pollingEngine;
@property(copy, nonatomic) NSString *startRoomMemory; // @synthesize startRoomMemory=_startRoomMemory;
@property(copy, nonatomic) NSString *did; // @synthesize did=_did;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)_excuteLogging;
- (void)_postDealingMessage:(id)arg1;
- (void)_enqueueMessage:(id)arg1;
- (void)_logMsg:(id)arg1;
- (void)didReceivePollingMessages:(id)arg1;
- (void)_dispatchMessages:(id)arg1;
- (void)_cancelDispatchMessages;
- (void)_dispatchMessages;
- (_Bool)isClosed;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithRoomID:(id)arg1 observer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

