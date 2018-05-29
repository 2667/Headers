//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBStartGroupChatSearchFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIImageView, WBStartGroupChatSearchField;
@protocol WBStartGroupChatHeaderViewDelegate;

@interface WBStartGroupChatHeaderView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UITextFieldDelegate, WBStartGroupChatSearchFieldDelegate>
{
    _Bool _isLastCellPendingToDelete;
    id <WBStartGroupChatHeaderViewDelegate> _delegate;
    WBStartGroupChatSearchField *_searchField;
    UIImageView *_backgroundView;
    UICollectionView *_collectionView;
    NSMutableArray *_headers;
    UIImageView *_separatorView;
    NSString *_lastQString;
}

@property(copy, nonatomic) NSString *lastQString; // @synthesize lastQString=_lastQString;
@property(retain, nonatomic) UIImageView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) _Bool isLastCellPendingToDelete; // @synthesize isLastCellPendingToDelete=_isLastCellPendingToDelete;
@property(retain, nonatomic) NSMutableArray *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WBStartGroupChatSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak id <WBStartGroupChatHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)startGroupChatSearchFieldDeleteBackward;
- (void)searchFieldDidBeginEditing;
- (void)searchFieldDidChange;
- (void)tapBackgroundView:(id)arg1;
- (void)clearSearchField;
- (void)dismissKeyboard;
- (void)updateHeaderViewWithContact:(id)arg1;
- (long long)findIndexOfContactInHeadersWith:(id)arg1;
- (void)configData;
- (void)adjustCollectionViewAndSearchFieldFrame;
- (void)layoutSubviews;
- (void)configUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

