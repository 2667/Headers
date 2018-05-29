//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBSTCardHeaderMediaInfo : WBModelObject
{
    NSString *_audioId;
    NSString *_audioName;
    NSString *_authorName;
    NSString *_audioUrl;
    NSString *_audioCover;
    double _anchorPoint;
}

@property(nonatomic) double anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(copy, nonatomic) NSString *audioCover; // @synthesize audioCover=_audioCover;
@property(copy, nonatomic) NSString *audioUrl; // @synthesize audioUrl=_audioUrl;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *audioName; // @synthesize audioName=_audioName;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

