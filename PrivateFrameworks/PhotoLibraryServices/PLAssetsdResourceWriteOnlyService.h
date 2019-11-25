//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import "PLAssetsdResourceWriteOnlyServiceProtocol.h"

@class NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol>
{
}

- (void)_modifyAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 forStreamID:(id)arg3 addToStream:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)removeAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 fromStreamID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)addAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 toStreamID:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

