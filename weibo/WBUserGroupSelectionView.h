//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBGroupCreationAlertViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, WBTableView;
@protocol WBUserGroupSelectionViewDelegate;

@interface WBUserGroupSelectionView : UIView <WBGroupCreationAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _loadingGroups;
    _Bool _selectionChanged;
    NSArray *_serverRecommandedGroups;
    NSArray *_serverSelectedNames;
    NSArray *_serverSelectedIDs;
    NSArray *_groups;
    NSMutableArray *_selectedNames;
    NSMutableArray *_selectedIDs;
    id <WBUserGroupSelectionViewDelegate> _delegate;
    WBTableView *_tableView;
    UIImageView *_unfollowButtonBackground;
    UIButton *_unfollowButton;
    UIButton *_confirmButton;
    long long _pendingNewGroupsCount;
}

@property(nonatomic) long long pendingNewGroupsCount; // @synthesize pendingNewGroupsCount=_pendingNewGroupsCount;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *unfollowButton; // @synthesize unfollowButton=_unfollowButton;
@property(retain, nonatomic) UIImageView *unfollowButtonBackground; // @synthesize unfollowButtonBackground=_unfollowButtonBackground;
@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool selectionChanged; // @synthesize selectionChanged=_selectionChanged;
@property(nonatomic, getter=isLoadGroups) _Bool loadingGroups; // @synthesize loadingGroups=_loadingGroups;
@property(nonatomic) id <WBUserGroupSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedIDs; // @synthesize selectedIDs=_selectedIDs;
@property(retain, nonatomic) NSMutableArray *selectedNames; // @synthesize selectedNames=_selectedNames;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *serverSelectedIDs; // @synthesize serverSelectedIDs=_serverSelectedIDs;
@property(retain, nonatomic) NSArray *serverSelectedNames; // @synthesize serverSelectedNames=_serverSelectedNames;
@property(retain, nonatomic) NSArray *serverRecommandedGroups; // @synthesize serverRecommandedGroups=_serverRecommandedGroups;
- (void).cxx_destruct;
- (void)prepareForPresentation;
- (void)didMoveToWindow;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)groupSelectionSectionIndex;
- (long long)createGroupSelectionSectionIndex;
- (void)groupCreationAlertView:(id)arg1 didFailedToCreateGroupWithName:(id)arg2 error:(id)arg3;
- (void)groupCreationAlertView:(id)arg1 didCreateGroup:(id)arg2;
- (id)analysisParametersForGroupCreationAlertView:(id)arg1;
- (id)existingGroupTitlesForGroupCreationAlertView:(id)arg1;
- (void)groupCreateButtonPressed:(id)arg1;
- (void)setSelected:(_Bool)arg1 forGroupAtIndex:(long long)arg2;
- (_Bool)hasSelectedGroup:(id)arg1;
- (void)applySelections;
- (void)resetSelections;
- (void)updateContentInset;
- (void)setGroups:(id)arg1 withRecommandedGroups:(id)arg2;
@property(readonly, nonatomic) double contentHeight;
- (void)reloadData;
- (void)confirm:(id)arg1;
- (void)unfollow:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetFrame:(struct CGRect)arg1;
- (void)setEmphasizeConfirmButton:(_Bool)arg1;
- (id)resetInitWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

