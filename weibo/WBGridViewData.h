//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableArray, WBGridView;

@interface WBGridViewData : NSObject <NSCopying, NSMutableCopying>
{
    WBGridView *_gridView;
    struct CGSize _boundsSize;
    struct CGSize _desiredCellSize;
    struct CGSize _actualCellSize;
    struct UIEdgeInsets _contentInsets;
    NSMutableArray *_sections;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (long long)offsetForStartIndexPath:(id)arg1 endIndexPath:(id)arg2;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (struct CGRect)rectForSection:(long long)arg1;
- (struct CGRect)rectForFooterInSection:(long long)arg1;
- (struct CGRect)rectForHeaderInSection:(long long)arg1;
- (double)_offsetForSection:(long long)arg1;
- (struct CGRect)_CGRectFromVerticalOffset:(double)arg1 height:(double)arg2;
- (void)fixDesiredCellSizeForWidth:(double)arg1;
- (id)indexPathsOfCellsInRect:(struct CGRect)arg1;
- (struct CGRect)cellRectAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsForAllSections;
- (unsigned long long)numberOfItemsPerRow;
- (struct CGSize)sizeForEntireGrid;
- (struct CGRect)rectForEntireGrid;
- (struct CGSize)cellSize;
- (void)setDesiredCellSize:(struct CGSize)arg1;
- (struct CGRect)cellRectForPoint:(struct CGPoint)arg1;
- (_Bool)pointIsInLastRow:(struct CGPoint)arg1;
- (id)itemIndexPathForPoint:(struct CGPoint)arg1;
- (void)gridViewDidChangeBoundsSize:(struct CGSize)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGridView:(id)arg1;

@end

