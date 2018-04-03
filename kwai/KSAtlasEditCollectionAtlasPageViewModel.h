//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasEditPreviewViewModel-Protocol.h"

@class NSString;
@protocol KSAtlasEditAssetElement, KSAtlasEditFilteredAtlasDataSource;

@interface KSAtlasEditCollectionAtlasPageViewModel : NSObject <KSAtlasEditPreviewViewModel>
{
    _Bool _swipable;
    _Bool _forwardEnabled;
    _Bool _backwardEnabled;
    NSObject<KSAtlasEditFilteredAtlasDataSource> *_dataSource;
    unsigned long long _currentIndex;
}

+ (id)keyPathsForValuesAffectingCurrentElement;
@property(nonatomic) _Bool backwardEnabled; // @synthesize backwardEnabled=_backwardEnabled;
@property(nonatomic) _Bool forwardEnabled; // @synthesize forwardEnabled=_forwardEnabled;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) NSObject<KSAtlasEditFilteredAtlasDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool swipable; // @synthesize swipable=_swipable;
- (void).cxx_destruct;
- (Class)viewControllerClass;
- (id)prevElement;
- (id)nextElement;
@property(readonly, nonatomic) id <KSAtlasEditAssetElement> currentElement;
- (void)backward;
- (void)forward;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

