//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDirectionalGroupMessageViewController.h"

#import "WBDirectionalGroupMessageViewControllerDelegate-Protocol.h"

@class NSString, WBDirectionalGroup, WBUser;

@interface WBDirectionalGroupSendingCardController : WBDirectionalGroupMessageViewController <WBDirectionalGroupMessageViewControllerDelegate>
{
    id _loadingOperationHandle;
    WBDirectionalGroup *_currentGroup;
    WBUser *_currentUser;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (void)groupMessageView:(id)arg1 canDeleteGroup:(id)arg2 inRow:(unsigned long long)arg3 withDecesionBlock:(CDUnknownBlockType)arg4;
- (void)navigationBarLeftButtonPressed;
- (void)directionalGroupMessageView:(id)arg1 didSelectGroup:(id)arg2 inController:(id)arg3;
- (void)searchFromGroups:(id)arg1 withKeyWords:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;
- (void)reloadGroupsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)reloadGroupsFromCacheWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCurrentUser:(id)arg1;
- (id)initWithCurrentGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

