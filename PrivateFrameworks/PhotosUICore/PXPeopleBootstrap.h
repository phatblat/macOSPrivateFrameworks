//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXPeopleBootstrap : NSObject
{
}

+ (void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3;
+ (void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3;
+ (void)_unfavoritePersonWithChangeRequest:(id)arg1;
+ (void)_favoritePersonWithChangeRequest:(id)arg1;
+ (void)_addToPeopleAlbumWithChangeRequest:(id)arg1;
+ (void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
+ (struct CGSize)preferredBootstrapSize;

@end
