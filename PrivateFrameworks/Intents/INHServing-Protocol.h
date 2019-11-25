//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class INImage, INPortableImageLoader, INUserContext, NSSet, NSString, NSUUID;

@protocol INHServing
- (oneway void)storeUserContext:(INUserContext *)arg1 forBundleIdentifier:(NSString *)arg2;
- (oneway void)fetchShareExtensionIntentForExtensionContextUUID:(NSUUID *)arg1 completion:(void (^)(INIntent *))arg2;
- (oneway void)loadBundleURLsForBundleIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)loadSchemaURLsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)loadSchemaURLsForBundleIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)purgeExpiredImagesInEphemeralStore;
- (oneway void)purgeImageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)retrieveImageWithIdentifier:(NSString *)arg1 completion:(void (^)(INImage *, NSError *))arg2;
- (oneway void)storeImage:(INImage *)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)loadDataImageForImage:(INImage *)arg1 scaledWidth:(double)arg2 scaledHeight:(double)arg3 usingPortableImageLoader:(INPortableImageLoader *)arg4 completion:(void (^)(INImage *, NSError *))arg5;
@end

