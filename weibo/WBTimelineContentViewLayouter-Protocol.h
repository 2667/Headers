//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBTimelineImageContentView;

@protocol WBTimelineContentViewLayouter <NSObject>
- (struct CGRect)contentView:(WBTimelineImageContentView *)arg1 imageFrameForRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (unsigned long long)contentView:(WBTimelineImageContentView *)arg1 numberOfColumnsInRow:(unsigned long long)arg2;
- (unsigned long long)numberOfGridImagesRowsIn:(WBTimelineImageContentView *)arg1;
@end

