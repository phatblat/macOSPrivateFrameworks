//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "QLThumbnailHost.h"

@class NSOperationQueue, NSString;

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost>
{
    NSOperationQueue *_thumbnailGenerationConcurrenQueue;
    id <QLThumbnailSurfaceGeneratorProtocol> _ioSurfaceGenerator;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak id <QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator; // @synthesize ioSurfaceGenerator=_ioSurfaceGenerator;
@property(retain, nonatomic) NSOperationQueue *thumbnailGenerationConcurrenQueue; // @synthesize thumbnailGenerationConcurrenQueue=_thumbnailGenerationConcurrenQueue;
- (void).cxx_destruct;
- (void)ioSurfaceWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withItem:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)protocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

