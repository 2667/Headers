//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWELiveNewMessageAlertView, AWELiveRoomModel, NSMutableArray, NSObject, NSString, UITableView;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWELiveChatMessageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    NSObject<OS_dispatch_queue> *_message_process_queue;
    NSObject<OS_dispatch_source> *_message_process_timer;
    _Bool _shouldScrollToBottom;
    NSMutableArray *_messageBufferQueue;
    unsigned long long _unreadMessageCount;
    NSMutableArray *_messageArray;
    AWELiveRoomModel *_liveRoomModel;
    CDUnknownBlockType _action;
    AWELiveNewMessageAlertView *_messageAlertView;
    UITableView *_messageListView;
    double _viewWidth;
}

@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(retain, nonatomic) UITableView *messageListView; // @synthesize messageListView=_messageListView;
@property(retain, nonatomic) AWELiveNewMessageAlertView *messageAlertView; // @synthesize messageAlertView=_messageAlertView;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) _Bool shouldScrollToBottom; // @synthesize shouldScrollToBottom=_shouldScrollToBottom;
@property(retain, nonatomic) AWELiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
@property(retain, nonatomic) NSMutableArray *messageArray; // @synthesize messageArray=_messageArray;
@property(nonatomic) unsigned long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(retain, nonatomic) NSMutableArray *messageBufferQueue; // @synthesize messageBufferQueue=_messageBufferQueue;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)scrollToBottomIfNeededWithScrollView:(id)arg1 contentOffsetY:(double)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_scrollToBottom;
- (void)updateListWithMessage:(id)arg1 notEnterMsgCnt:(long long)arg2;
- (void)processMessage;
- (_Bool)shouldEnqueueMessage:(id)arg1;
- (void)receiveMessage:(id)arg1;
- (void)addChatMessage:(id)arg1;
- (void)stopMessageProcessTimer;
- (void)scheduleMessageProcessTimer;
- (void)_initProcessQueue;
- (void)_addObserver;
- (void)_setupUI;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithSize:(struct CGSize)arg1 liveRoomModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

