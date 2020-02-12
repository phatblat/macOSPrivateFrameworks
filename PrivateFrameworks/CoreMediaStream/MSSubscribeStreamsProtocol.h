//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocol.h>

@interface MSSubscribeStreamsProtocol : MSStreamsProtocol
{
    struct __MSSSPCContext {
        struct __MSSPCContext _super;
        CDUnknownFunctionPointerType finishedCallback;
        CDUnknownFunctionPointerType gotDataChunkCallback;
        CDUnknownFunctionPointerType authFailedCallback;
        CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
        CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
        double connectionTimeout;
        long long __state;
        struct __CFData *__chunkLengthData;
        struct __CFData *__currentChunkData;
        long long __chunkBytesRemaining;
    } _context;
    int _chunkIndex;
    struct __MSSSPCChunkParsingContext {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        struct __CFString *_field7;
        struct __CFURL *_field8;
        struct __CFString *_field9;
        struct __CFString *_field10;
        int _field11;
    } *_parseContext;
}

- (void)abort;
- (id)_assetCollectionsFromCoreArray:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (id)_assetFromCoreDictionary:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)_invalidFieldErrorWithFieldName:(id)arg1 suggestion:(id)arg2;
- (void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)arg1;
- (void)_chunkDidFindSubscriptionGoneForPersonID:(id)arg1;
- (void)_chunkDidEndStreamForPersonID:(id)arg1 ctag:(id)arg2;
- (void)_chunkDidParseAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (void)_chunkDidBeginStreamForPersonID:(id)arg1 wasReset:(BOOL)arg2 metadata:(id)arg3;
- (void)_parseNextChunk;
- (void)_parseChunks;
- (void)_coreProtocolDidFailAuthentication:(id)arg1;
- (void)_coreProtocolDidGetDataChunk:(id)arg1;
- (void)_coreProtocolDidFinishError:(id)arg1;
- (void)pollForSubscriptionUpdatesWithAccountAnchors:(id)arg1;
- (id)_pathToChunkIndex:(int)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

