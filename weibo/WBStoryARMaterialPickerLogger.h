//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface WBStoryARMaterialPickerLogger : NSObject
{
    NSString *_currentID;
    NSMutableArray *_idsArray;
}

@property(retain, nonatomic) NSMutableArray *idsArray; // @synthesize idsArray=_idsArray;
@property(retain, nonatomic) NSString *currentID; // @synthesize currentID=_currentID;
- (void).cxx_destruct;
- (void)finishLogging;
- (id)init;

@end

