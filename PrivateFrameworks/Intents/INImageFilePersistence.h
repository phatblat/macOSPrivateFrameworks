//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INImageStoring.h"

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject <INImageStoring>
{
    INImageBundle *_imageBundle;
    NSArray *__supportedClasses;
}

@property(copy, nonatomic, setter=_setSupportedClasses:) NSArray *_supportedClasses; // @synthesize _supportedClasses=__supportedClasses;
- (void).cxx_destruct;
- (id)_deleteItemAtFilePath:(id)arg1;
- (id)_filePathForImageWithFileName:(id)arg1;
@property(readonly, nonatomic) unsigned long long servicePriority;
@property(readonly, nonatomic) NSString *serviceIdentifier;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeImage:(id)arg1 scaled:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)canStoreImage:(id)arg1;
- (void)purgeExpiredImagesInEphemeralStore;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

