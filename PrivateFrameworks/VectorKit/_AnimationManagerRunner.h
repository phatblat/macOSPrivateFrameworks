//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKAnimationRunner.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _AnimationManagerRunner : NSObject <VKAnimationRunner>
{
    // Error parsing type: ^{AnimationManager=^^?{_retain_ptr<_AnimationManagerRunner *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{RunLoopController}{mutex={_opaque_pthread_mutex_t=q[56c]}}{array<std::__1::unordered_set<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >, 2>=[2{unordered_set<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >={__hash_table<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>, std::__1::allocator<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> > >={__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>=^{__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >=Q}{__compressed_pair<float, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >=f}}}]}{atomic<bool>=AB}}, name: _animationManager
}

- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
-     // Error parsing type: @24@0:8^{AnimationManager=^^?{_retain_ptr<_AnimationManagerRunner *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{RunLoopController}{mutex={_opaque_pthread_mutex_t=q[56c]}}{array<std::__1::unordered_set<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >, 2>=[2{unordered_set<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >={__hash_table<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>, std::__1::allocator<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> > >={__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>=^{__hash_node_base<std::__1::__hash_node<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >=Q}{__compressed_pair<float, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >=f}}}]}{atomic<bool>=AB}}16, name: initWithAnimationManager:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

