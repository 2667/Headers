//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APVideoMaterialBusinessModel, NSArray;

@interface BCResourceManager : NSObject
{
    APVideoMaterialBusinessModel *_model;
    NSArray *_filters;
    NSArray *_commonMarks;
}

- (void).cxx_destruct;
- (id)readCommonMarksFromHistoryCache;
- (void)readCommonMarksFromCache;
- (void)cachedCommonMarkIdArray:(id)arg1;
- (void)cacheCommonMarks;
- (id)filters;
- (id)facialThemes;
- (void)addCommonMark:(id)arg1;
- (void)loadResource;
- (void)dealloc;

@end

