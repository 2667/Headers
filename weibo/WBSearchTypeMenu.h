//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBSkinning-Protocol.h"

@class NSArray, NSString, UIImageView, UITableView, WBSearchType;
@protocol WBSearchTypeMenuDelegate;

@interface WBSearchTypeMenu : UIView <UITableViewDelegate, UITableViewDataSource, WBSkinning>
{
    int _menuCategory;
    _Bool isMirror;
    _Bool _showSearchTypeCount;
    int arrowDirection;
    id <WBSearchTypeMenuDelegate> _delegate;
    NSArray *_searchTypes;
    WBSearchType *_selectedType;
    NSString *_backgroundImageNameForDirectionMiddle;
    UIImageView *_backgroundImageView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *backgroundImageNameForDirectionMiddle; // @synthesize backgroundImageNameForDirectionMiddle=_backgroundImageNameForDirectionMiddle;
@property(nonatomic) _Bool showSearchTypeCount; // @synthesize showSearchTypeCount=_showSearchTypeCount;
@property(retain, nonatomic) WBSearchType *selectedType; // @synthesize selectedType=_selectedType;
@property(retain, nonatomic) NSArray *searchTypes; // @synthesize searchTypes=_searchTypes;
@property(nonatomic) __weak id <WBSearchTypeMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) int menuCategory;
- (double)contentHeight;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)reloadData;
- (void)reloadUIElementsWithDirection:(unsigned long long)arg1;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

