//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOXPCSerializable.h"

@class NSData, NSString, NSURL;

@interface GEOTileData : NSObject <GEOXPCSerializable>
{
    NSData *_data;
    NSURL *_fileURL;
    unsigned long long _cachedFileSize;
    long long _sandboxExtension;
    id _decodedRepresentation;
}

@property(readonly, nonatomic) id decodedRepresentation; // @synthesize decodedRepresentation=_decodedRepresentation;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long length;
- (void)encodeToXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithDecodedRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

