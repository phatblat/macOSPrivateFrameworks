//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class INImage, INPortableImageLoader, NSSet, NSString;

@protocol INHServing
- (oneway void)loadSchemaURLsForBundleIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)purgeExpiredImagesInEphemeralStore;
- (oneway void)purgeImageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)retrieveImageWithIdentifier:(NSString *)arg1 completion:(void (^)(INImage *, NSError *))arg2;
- (oneway void)storeImage:(INImage *)arg1 scaled:(BOOL)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (oneway void)loadImageData:(INImage *)arg1 usingPortableImageLoader:(INPortableImageLoader *)arg2 completion:(void (^)(INImage *, NSError *))arg3;
@end

