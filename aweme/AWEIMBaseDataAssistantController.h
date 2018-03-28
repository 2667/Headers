//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWEIMChatModel, AWEIMNotificationListDataController, NSString;
@protocol AWEIMBaseDataAssistantControllerDelegate;

@interface AWEIMBaseDataAssistantController : NSObject
{
    _Bool _firstFetchRemote;
    _Bool _hasMarkedDelete;
    id <AWEIMBaseDataAssistantControllerDelegate> _delegate;
    NSString *_filepath;
    AWEIMChatModel *_model;
    AWEIMNotificationListDataController *_dataController;
    long long _assistantCount;
}

@property(nonatomic) _Bool hasMarkedDelete; // @synthesize hasMarkedDelete=_hasMarkedDelete;
@property(nonatomic) long long assistantCount; // @synthesize assistantCount=_assistantCount;
@property(retain, nonatomic) AWEIMNotificationListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AWEIMChatModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(nonatomic) __weak id <AWEIMBaseDataAssistantControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool firstFetchRemote; // @synthesize firstFetchRemote=_firstFetchRemote;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeKVO;
- (void)_addKVO;
- (void)_removeCache;
- (void)_updateAssistantChat:(id)arg1;
- (void)_loadAssistantFromCacheWithUnreadCount:(long long)arg1;
- (void)handleUpdateAssistantNoti:(id)arg1;
- (void)clearAssistantChat;
- (void)removeAssistantChat;
- (void)fetchRemoteAssistantChatWithUnreadCount:(long long)arg1;
- (void)fetchLocalAssistantChatWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

