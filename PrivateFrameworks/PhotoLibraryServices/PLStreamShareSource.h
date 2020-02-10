//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject
{
    NSData *_mediaData;
    NSString *_fileExtension;
    NSURL *_mediaURL;
    PFVideoComplement *_videoComplement;
    long long _mediaType;
}

@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) PFVideoComplement *videoComplement; // @synthesize videoComplement=_videoComplement;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
- (void).cxx_destruct;
- (id)photoLibrary;
- (void)cleanupResources;
- (void)_cleanupIfNeededMediaAtURL:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)serializedDictionary;

@end
