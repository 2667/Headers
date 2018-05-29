//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, WBGridView, WBGridViewData;

@interface WBGridViewUpdateInfo : NSObject
{
    WBGridViewData *_oldGridData;
    WBGridViewData *_newGridData;
    NSMutableSet *_animatingCells;
    WBGridView *_gridView;
    NSMutableDictionary *_sectionUpdates;
}

@property(retain, nonatomic) NSMutableDictionary *sectionUpdates; // @synthesize sectionUpdates=_sectionUpdates;
@property(nonatomic) __weak WBGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (unsigned long long)numberOfItemsAfterUpdates;
@property(readonly, nonatomic) unsigned long long numberOfUpdates;
@property(readonly, nonatomic) __weak NSArray *allSectionUpdates;
- (id)animateCellUpdatesUsingVisibleContentRect:(struct CGRect)arg1;
- (void)_animateUpdates:(CDUnknownBlockType)arg1 withDesiredDelay:(double)arg2;
- (id)oldToNewIndexPathMap:(id)arg1;
- (id)currentToOldIndexPathMap:(id)arg1;
- (void)animateReloadForCell:(id)arg1 originalCell:(id)arg2 withAnimation:(int)arg3;
- (void)animateInsertionForCell:(id)arg1 withAnimation:(int)arg2;
- (id)animatedDeletionForCell:(id)arg1 withAnimation:(int)arg2;
- (id)_imageViewForView:(id)arg1;
- (id)currentGridViewData;
- (id)oldGridViewData;
- (void)updateItemsAtIndexPaths:(id)arg1 updateAction:(int)arg2 withAnimation:(int)arg3;
- (id)sectionUpdateForSection:(long long)arg1;
- (id)initWithOldGridData:(id)arg1 forGridView:(id)arg2;
- (void)dealloc;

@end

