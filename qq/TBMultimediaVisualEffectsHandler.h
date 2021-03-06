//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/TBStoryVideoVisualEffectsDelegate-Protocol.h>

@class NSString, TBMultimediaEditView, TBStoryVideoVisualEffects, TBStoryVideoVisualEffectsItem;

@interface TBMultimediaVisualEffectsHandler : NSObject <TBStoryVideoVisualEffectsDelegate>
{
    TBMultimediaEditView *_editView;
    TBStoryVideoVisualEffects *_visualEffects;
    long long _videoVisualEffectType;
    TBStoryVideoVisualEffectsItem *_currentVisualEffectsItem;
    unsigned long long _filterIndex;
    unsigned long long _mediaSource;
}

@property(nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(nonatomic) __weak TBStoryVideoVisualEffectsItem *currentVisualEffectsItem; // @synthesize currentVisualEffectsItem=_currentVisualEffectsItem;
@property(nonatomic) long long videoVisualEffectType; // @synthesize videoVisualEffectType=_videoVisualEffectType;
@property(retain, nonatomic) TBStoryVideoVisualEffects *visualEffects; // @synthesize visualEffects=_visualEffects;
@property(nonatomic) __weak TBMultimediaEditView *editView; // @synthesize editView=_editView;
- (void).cxx_destruct;
- (void)storyVideoVisualEffects:(id)arg1 didSelectedItemAtIndex:(unsigned long long)arg2;
- (void)getPublishInfo:(id)arg1;
- (void)dealloc;
- (void)hide;
- (void)show;
- (id)initWithMultimediaView:(id)arg1 mediaSource:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

