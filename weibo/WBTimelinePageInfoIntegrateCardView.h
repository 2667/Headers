//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineDetailCardContentView.h"

@interface WBTimelinePageInfoIntegrateCardView : WBTimelineDetailCardContentView
{
    _Bool _isRetweeted;
}

+ (Class)trendContentViewStyle;
@property(nonatomic) _Bool isRetweeted; // @synthesize isRetweeted=_isRetweeted;
- (id)cardBackgroundColor:(_Bool)arg1 isRetweeted:(_Bool)arg2 atIndex:(unsigned long long)arg3;
- (id)cardBackgroundColor:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)imageBackgroundBottomForCard:(id)arg1;
- (unsigned long long)imageBackgroundMiddleForCard:(id)arg1;
- (unsigned long long)imageBackgroundTopForCard:(id)arg1;
- (_Bool)passEventToButtonDirectly;
- (void)resetSubViewRect:(id)arg1;

@end

