//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSLiveAudiencePaintGiftParam : NSObject
{
    NSString *_liveStreamId;
    long long _width;
    long long _height;
    NSArray *_drawingGiftPoints;
}

@property(retain, nonatomic) NSArray *drawingGiftPoints; // @synthesize drawingGiftPoints=_drawingGiftPoints;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *liveStreamId; // @synthesize liveStreamId=_liveStreamId;
- (void).cxx_destruct;

@end

