//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSListViewController.h"

#import "KSNewsCellDelegate-Protocol.h"

@class KSGossipPrivacyTipView, KSMessageView, NSString;

@interface KSGossipListViewController : KSListViewController <KSNewsCellDelegate>
{
    _Bool _uapLog;
    KSMessageView *_gossipEmptyView;
    KSGossipPrivacyTipView *_tipView;
}

@property(retain, nonatomic) KSGossipPrivacyTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) KSMessageView *gossipEmptyView; // @synthesize gossipEmptyView=_gossipEmptyView;
- (void).cxx_destruct;
- (void)_addViewNewsHideSettingsLog;
- (id)ks_followRefer;
- (id)ksuShowMetaData;
- (id)pageURL;
- (void)didTapGoToFollowButton;
- (void)goFeedDetailController:(id)arg1 fromType:(unsigned long long)arg2 anchor:(id)arg3;
- (void)goUserProfileWithUserInfo:(id)arg1 userSex:(id)arg2 userName:(id)arg3 userId:(id)arg4 anchor:(id)arg5 remarkNameChanged:(CDUnknownBlockType)arg6;
- (void)didTapPhotoWithCell:(id)arg1 feed:(id)arg2 userInfo:(id)arg3;
- (void)didTapHeaderViewWithCell:(id)arg1 userInfo:(id)arg2 onRemarkNameChanged:(CDUnknownBlockType)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didSelectCell:(id)arg1 withListObject:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)cellWithListObject:(id)arg1 atIndexPath:(id)arg2;
- (void)didDragToRefresh:(id)arg1;
- (void)hidePrivacyTipViewIfNeeded;
- (void)_showPrivacyTipIfNeeded;
- (void)viewDidLoad;
- (void)modelDidFinishLoad:(id)arg1;
- (id)createModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

