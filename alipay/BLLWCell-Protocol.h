//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLLWData, BLLWLayout, BLLWStyle;

@protocol BLLWCell <NSObject>
@property(retain, nonatomic) BLLWLayout *layout;
@property(retain, nonatomic) BLLWStyle *style;
@property(retain, nonatomic) BLLWData *data;
- (void)refreshWithData:(BLLWData *)arg1 Style:(BLLWStyle *)arg2 Layout:(BLLWLayout *)arg3;
@end

