//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AOSUISignInDataclassManager : NSObject
{
}

+ (id)sharedManager;
- (id)_listStringFromAppNames:(id)arg1;
- (void)_enableDataClass:(id)arg1 forAccount:(id)arg2 window:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enableDataclassesAfterSignInForAccount:(id)arg1 window:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
