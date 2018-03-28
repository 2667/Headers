//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEIMBaseDataAssistantControllerDelegate-Protocol.h"
#import "AWEIMBaseDataControllerProtocol-Protocol.h"
#import "AWEIMBaseDataStrangeControllerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "TTIMMsgExt-Protocol.h"

@class AWEIMBaseDataAssistantController, AWEIMBaseDataStrangeController, AWEIMLoginManager, AWEIMSendMsgLogController, NSMutableArray, NSMutableDictionary, NSString;
@protocol AWEIMBaseDataControllerDelegate;

@interface AWEIMBaseDataController : NSObject <TTIMMsgExt, AWEUserMessage, AWEIMBaseDataAssistantControllerDelegate, AWEIMBaseDataStrangeControllerDelegate, AWEIMBaseDataControllerProtocol>
{
    _Bool _needRefresh;
    id <AWEIMBaseDataControllerDelegate> _delegate;
    NSMutableArray *_chatArray;
    AWEIMLoginManager *_configManager;
    CDUnknownBlockType _fetchListCompletion;
    NSMutableDictionary *_chatDict;
    AWEIMBaseDataAssistantController *_assistantController;
    AWEIMBaseDataStrangeController *_strangeController;
    AWEIMSendMsgLogController *_sendLogController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEIMSendMsgLogController *sendLogController; // @synthesize sendLogController=_sendLogController;
@property(retain, nonatomic) AWEIMBaseDataStrangeController *strangeController; // @synthesize strangeController=_strangeController;
@property(retain, nonatomic) AWEIMBaseDataAssistantController *assistantController; // @synthesize assistantController=_assistantController;
@property(retain, nonatomic) NSMutableDictionary *chatDict; // @synthesize chatDict=_chatDict;
@property(copy, nonatomic) CDUnknownBlockType fetchListCompletion; // @synthesize fetchListCompletion=_fetchListCompletion;
@property(retain, nonatomic) AWEIMLoginManager *configManager; // @synthesize configManager=_configManager;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) NSMutableArray *chatArray; // @synthesize chatArray=_chatArray;
@property(nonatomic) __weak id <AWEIMBaseDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isChatExistInChatList:(id)arg1;
- (void)didClearStrangerUnreadCount:(id)arg1;
- (void)didUpdateStrangerChat:(id)arg1;
- (void)didClearAssistantUnreadCount:(id)arg1;
- (void)didUpdateAssistantChat:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)handleUpdateChatLatestMsgNoti:(id)arg1;
- (void)handleClearSessionUnreadCountNoti:(id)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)onSendAck:(id)arg1 msg:(id)arg2 extraInfo:(id)arg3;
- (void)onAdd:(id)arg1 msg:(id)arg2;
- (void)onSessionUpdated:(id)arg1;
- (void)onMsgCenterQuery:(id)arg1;
- (void)_commonSetup;
- (void)_handleNewMessageCallback;
- (void)_binaryInsertChat:(id)arg1;
- (void)_clearChatUnreadCount:(id)arg1;
- (void)_loadStrangerChat;
- (void)_loadAssistantChat;
- (void)_sortChatArrayByTime;
- (void)_fetchChatList;
- (void)_fetchContactList;
- (void)syncLocalTotalUnreadCount;
- (void)removeChat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchChatList:(CDUnknownBlockType)arg1;
- (void)fetchFantasy:(CDUnknownBlockType)arg1;
- (void)setupIMData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

