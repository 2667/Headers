//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface WBBaseMediaObject : NSObject
{
    NSString *objectID;
    NSString *title;
    NSString *description;
    NSData *thumbnailData;
    NSString *scheme;
}

+ (id)mappedMediaObjectWithDictionary:(id)arg1;
+ (id)dictionaryWithMediaObject:(id)arg1;
+ (id)objectType;
+ (id)object;
+ (void)nothing;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme;
@property(retain, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *objectID; // @synthesize objectID;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (id)streamLowBandUrl;
- (id)streamUrl;
- (id)lowBandUrl;
- (id)url;
- (void)setThumbnailFilePath:(id)arg1;
- (id)saveThumbnailToTask:(id)arg1;
- (id)thumbnailFilePath;

@end

