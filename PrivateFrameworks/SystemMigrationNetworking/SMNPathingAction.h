//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigrationNetworking/SMNAction.h>

@class NSDictionary, NSFileHandle, NSSet, NSString;

@interface SMNPathingAction : SMNAction
{
    BOOL _autoSizeBundles;
    BOOL _useTrueOnDiskSizes;
    BOOL _autoDetectBundles;
    NSFileHandle *_networkDirectoryEnumeratorStream;
    NSString *_compressionFormat;
    CDUnknownBlockType _receiveDataBlock;
    NSString *_startingPath;
    NSSet *_dontDescendPaths;
    NSSet *_additionalProperties;
    NSDictionary *_restartPoint;
}

+ (id)actionWithPayload:(id)arg1;
+ (BOOL)shouldCloseInboundStreamWhenDone;
+ (BOOL)streamsResults;
+ (int)actionID;
@property(retain) NSDictionary *restartPoint; // @synthesize restartPoint=_restartPoint;
@property(retain) NSSet *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property BOOL autoDetectBundles; // @synthesize autoDetectBundles=_autoDetectBundles;
@property(retain) NSSet *dontDescendPaths; // @synthesize dontDescendPaths=_dontDescendPaths;
@property(retain) NSString *startingPath; // @synthesize startingPath=_startingPath;
@property(copy, nonatomic) CDUnknownBlockType receiveDataBlock; // @synthesize receiveDataBlock=_receiveDataBlock;
@property BOOL useTrueOnDiskSizes; // @synthesize useTrueOnDiskSizes=_useTrueOnDiskSizes;
@property BOOL autoSizeBundles; // @synthesize autoSizeBundles=_autoSizeBundles;
@property(retain) NSString *compressionFormat; // @synthesize compressionFormat=_compressionFormat;
@property(retain) NSFileHandle *networkDirectoryEnumeratorStream; // @synthesize networkDirectoryEnumeratorStream=_networkDirectoryEnumeratorStream;
- (void).cxx_destruct;
- (BOOL)receiveResultOnFd:(int)arg1 errorIsFatal:(char *)arg2;
- (BOOL)sendResultOnFd:(int)arg1;
- (id)requestPayload;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithStartingPath:(id)arg1 dontDescendPaths:(id)arg2 andRestartPoint:(id)arg3;

@end

