//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryItemListController.h"

@class NSString;

@interface WBRecommendStoryItemListController : WBStoryItemListController
{
    NSString *_subType;
    _Bool *_shouldLogExposeForFullScreen;
}

@property(nonatomic) _Bool *shouldLogExposeForFullScreen; // @synthesize shouldLogExposeForFullScreen=_shouldLogExposeForFullScreen;
@property(retain, nonatomic) NSString *subType; // @synthesize subType=_subType;
- (void).cxx_destruct;
- (void)storyItemsProvider_didEnterFullScreenForItem:(id)arg1;
- (_Bool)storyItemsProvider_shouldLogExposeForFullScreen:(id)arg1;
- (id)analysisParametersForFullScreen;
- (long long)storyItemsProvider_providerType;
- (id)init;

@end

