//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSelectFollowGroupView.h"

#import "WBCustomModalViewDelegate-Protocol.h"

@class NSString, UIColor;
@protocol WBProfileUserGroupSelectionViewDelegate;

@interface WBProfileUserGroupSelectionView : WBSelectFollowGroupView <WBCustomModalViewDelegate>
{
    NSString *_remarkName;
    NSString *_uid;
    UIColor *_remarkNameColor;
}

@property(retain, nonatomic) UIColor *remarkNameColor; // @synthesize remarkNameColor=_remarkNameColor;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *remarkName; // @synthesize remarkName=_remarkName;
- (void).cxx_destruct;
- (void)modalView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)modalView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)remarkButtonPressed;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)createGroupSelectionSectionIndex;
- (long long)groupSelectionSectionIndex;
- (long long)createRemarkSectionIndex;
- (void)dealloc;
- (void)setRemarkName:(id)arg1 andUid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <WBProfileUserGroupSelectionViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

