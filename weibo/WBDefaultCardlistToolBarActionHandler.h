//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardlistToolBarActionHandler.h"

#import "WBMenuListPopoverViewDelegate-Protocol.h"
#import "WBToolBarMenuDelegate-Protocol.h"

@class NSString;

@interface WBDefaultCardlistToolBarActionHandler : WBCardlistToolBarActionHandler <WBToolBarMenuDelegate, WBMenuListPopoverViewDelegate>
{
}

- (void)removeGuideView;
- (void)showGuideView:(id)arg1;
- (void)toolbarMenu:(id)arg1 didClickProfileFollowButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (_Bool)toolbarMenu:(id)arg1 didClickPageComposerButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (void)menuListPopoverViewDidDismiss;
- (_Bool)WBMenuListPopoverView:(id)arg1 didClickCommonButtonView:(id)arg2 withModel:(id)arg3;
- (void)toolbarMenu:(id)arg1 didClickMenuListPopButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (void)toolbarMenu:(id)arg1 didClickPageFollowButton:(id)arg2 withCommonButtonModel:(id)arg3;
- (void)followorUnfollowCardListWithButtonModel:(id)arg1;
- (void)followorUnfollowCardList;
- (void)didHandleLayoutAction:(id)arg1;
- (void)didHandleSetDataAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

