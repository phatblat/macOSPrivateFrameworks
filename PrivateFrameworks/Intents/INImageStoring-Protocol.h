//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INImageServing.h"

@class INImage, NSString;

@protocol INImageStoring <INImageServing>
- (void)purgeImageWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)retrieveImageWithIdentifier:(NSString *)arg1 completion:(void (^)(INImage *, NSError *))arg2;
- (void)storeImage:(INImage *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (BOOL)canStoreImage:(INImage *)arg1;
@end

