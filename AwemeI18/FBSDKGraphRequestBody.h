//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface FBSDKGraphRequestBody : NSObject
{
    NSMutableData *_data;
}

+ (id)mimeContentType;
- (void).cxx_destruct;
- (void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(CDUnknownBlockType)arg4;
@property(readonly, retain, nonatomic) NSData *data;
- (void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3;
- (void)appendUTF8:(id)arg1;
- (id)init;

@end

