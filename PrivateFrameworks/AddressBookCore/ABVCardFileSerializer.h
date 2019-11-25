//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface ABVCardFileSerializer : NSObject
{
    NSString *_basePath;
    NSMutableArray *_filenames;
}

+ (id)serializerWithBasePath:(id)arg1 names:(id)arg2;
+ (id)serializerWithBasePath:(id)arg1;
+ (id)serializerWithBasePath:(id)arg1 singleCard:(BOOL)arg2;
+ (id)serializerWithBasePath:(id)arg1 singleCard:(BOOL)arg2 names:(id)arg3;
+ (id)filenamesForPeople:(id)arg1;
+ (id)filenameForPeople:(id)arg1;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
- (void)serializePersonWithName:(id)arg1 vCardData:(id)arg2;
- (void)addFilename:(id)arg1;
- (void)writeVCardData:(id)arg1 toPath:(id)arg2;
- (void)serializePerson:(id)arg1;
@property(readonly, nonatomic) NSArray *filenames;
- (id)makeProgress;
- (void)serializePeople:(id)arg1;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1;

@end

