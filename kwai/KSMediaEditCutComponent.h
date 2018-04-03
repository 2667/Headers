//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSMediaEditAbstractTimeLineComponent.h"

#import "KSMediaEditActivity-Protocol.h"
#import "KSMediaEditCancelable-Protocol.h"

@class KSMediaEditActivityController, KSMediaEditCutController, NSString;

@interface KSMediaEditCutComponent : KSMediaEditAbstractTimeLineComponent <KSMediaEditActivity, KSMediaEditCancelable>
{
    KSMediaEditCutController *_cutController;
    KSMediaEditActivityController *_activityController;
    unsigned long long _selectedTab;
}

@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) __weak KSMediaEditActivityController *activityController; // @synthesize activityController=_activityController;
@property(retain, nonatomic) KSMediaEditCutController *cutController; // @synthesize cutController=_cutController;
- (void).cxx_destruct;
- (void)activityDidFinish;
- (void)activityDidCancel;
- (void)activityWillShow;
- (double)activityHeight;
- (void)activityDidAddedToController:(id)arg1;
- (void)finishEditing;
- (void)cancelEditing;
- (void)beginEditing;
- (void)afterConfigTimeLineAndPlayer;
- (void)newState:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

