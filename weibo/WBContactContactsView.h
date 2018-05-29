//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBContactContactsTableViewCellDelegate-Protocol.h"
#import "WBSkinning-Protocol.h"

@class NSMutableArray, NSString, UIControl, UIImageView, WBContactGroup, WBContactSearchSelectButton, WBSearchBar, WBTableView;
@protocol WBContactContactsViewDelegate;

@interface WBContactContactsView : UIView <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UIScrollViewDelegate, WBContactContactsTableViewCellDelegate, WBSkinning>
{
    WBSearchBar *searchBar;
    _Bool isSearching;
    _Bool isShowingSearchResult;
    _Bool showsCancelWhenSearching;
    _Bool showsOverlayWhenSearching;
    UIControl *_overlayView;
    WBContactGroup *group;
    WBTableView *contactsTableView;
    NSMutableArray *contacts;
    WBTableView *searchContactsTableView;
    NSMutableArray *searchContacts;
    id <WBContactContactsViewDelegate> delegate;
    _Bool isCanceling;
    _Bool _shouldShowSearchSelectBtn;
    _Bool _shouldShowH5SelectBtn;
    WBContactSearchSelectButton *_searchSelectBtn;
    WBContactSearchSelectButton *_h5SelectBtn;
    UIImageView *_searchBarContainer;
}

@property(retain, nonatomic) UIImageView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) WBContactSearchSelectButton *h5SelectBtn; // @synthesize h5SelectBtn=_h5SelectBtn;
@property(nonatomic) _Bool shouldShowH5SelectBtn; // @synthesize shouldShowH5SelectBtn=_shouldShowH5SelectBtn;
@property(retain, nonatomic) WBContactSearchSelectButton *searchSelectBtn; // @synthesize searchSelectBtn=_searchSelectBtn;
@property(nonatomic) _Bool shouldShowSearchSelectBtn; // @synthesize shouldShowSearchSelectBtn=_shouldShowSearchSelectBtn;
@property(readonly, nonatomic) WBTableView *searchContactsTableView; // @synthesize searchContactsTableView;
@property(readonly, nonatomic) WBTableView *contactsTableView; // @synthesize contactsTableView;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar;
@property(nonatomic) _Bool showsOverlayWhenSearching; // @synthesize showsOverlayWhenSearching;
@property(nonatomic) __weak id <WBContactContactsViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) WBContactGroup *group; // @synthesize group;
@property(readonly, nonatomic) _Bool isShowingSearchResult; // @synthesize isShowingSearchResult;
@property(readonly, nonatomic) _Bool isSearching; // @synthesize isSearching;
- (void).cxx_destruct;
- (void)didPressRemoveButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressTipButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressFavoritesButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressStatusesButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressFollowersButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressSendVoiceButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressSendTextButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressMakeCallButtonInCell:(id)arg1 contact:(id)arg2;
- (void)didPressSendPMButtonInCell:(id)arg1 contact:(id)arg2;
- (void)contactsTableViewTouched:(id)arg1;
- (void)overlayViewTouched:(id)arg1;
- (void)cancelSearching;
- (void)startSearching;
- (void)clearSelection:(_Bool)arg1;
- (void)onH5SelectButtonClicked:(id)arg1;
- (void)onSearchSelectButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissKeyboard;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (Class)contactTableViewCellClass;
- (id)contactForIndexPath:(id)arg1;
- (id)contactForCell:(id)arg1;
- (id)tableView:(id)arg1 contactForRowAtIndexPath:(id)arg2;
- (id)contactsDataSourceOfTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)refreshSearchingResults;
- (void)showSearchResult:(_Bool)arg1;
- (void)realTimeSearchWithKey:(id)arg1;
- (id)localSearchPredicateForKey:(id)arg1;
- (void)copySearchDataSource;
- (void)refreshContacts;
- (void)setSearchBarPlaceHolder;
- (id)currentTableView;
- (id)contactsTableViewNoDataPrompt;
@property(readonly, nonatomic) UIControl *overlayView; // @synthesize overlayView=_overlayView;
- (void)layoutSubviews;
- (void)updateOverlayViewFrame;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andShouldShowSearchSelectBtn:(_Bool)arg2 andShouldShowH5SelectBtn:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andShouldShowSearchSelectBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)releaseTableView:(id *)arg1;
- (void)initTableView:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

