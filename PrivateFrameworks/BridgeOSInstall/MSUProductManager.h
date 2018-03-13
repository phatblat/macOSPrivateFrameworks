//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MSUProductManager : NSObject
{
    NSObject<OS_dispatch_queue> *_productQueue;
    NSMutableArray *_catalogs;
}

+ (id)_sendSynchronousRequest:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (void)_sendAsynchronousRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)defaultManager;
@property(retain) NSMutableArray *catalogs; // @synthesize catalogs=_catalogs;
@property(retain) NSObject<OS_dispatch_queue> *productQueue; // @synthesize productQueue=_productQueue;
- (void).cxx_destruct;
- (void)evaluateProductsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_evaluateProduct:(id)arg1 evaluationOptions:(id)arg2 catalogOptions:(unsigned long long)arg3 installable:(char *)arg4 error:(id *)arg5;
- (void)registerCatalogAtURL:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)installableProductsMatchingPredicate:(id)arg1;
@property(readonly) NSArray *installableProducts;
@property(readonly) NSArray *allProducts;
- (void)productQueueReentrantSync:(CDUnknownBlockType)arg1;
- (id)init;

@end

