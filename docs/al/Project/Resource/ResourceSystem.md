# ResourceSystem.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# ResourceSystem.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al14ResourceSystemC2EPKc` | `al::ResourceSystem::ResourceSystem(char const*)` | :white_check_mark: |
| `_ZN2al14ResourceSystem11addCategoryERKN4sead14SafeStringBaseIcEEiPNS1_4HeapE` | `al::ResourceSystem::addCategory(sead::SafeStringBase<char> const&,int,sead::Heap *)` | :white_check_mark: |
| `_ZN2al14ResourceSystem28findOrCreateResourceCategoryERKN4sead14SafeStringBaseIcEES5_PKc` | `al::ResourceSystem::findOrCreateResourceCategory(sead::SafeStringBase<char> const&,sead::SafeStringBase<char> const&,char const*)` | :white_check_mark: |
| `_ZN2al14ResourceSystem24findResourceCategoryIterERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::findResourceCategoryIter(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `_ZN2al14ResourceSystem23isEmptyCategoryResourceERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::isEmptyCategoryResource(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `_ZN2al14ResourceSystem25createCategoryResourceAllERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::createCategoryResourceAll(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `_ZN2al14ResourceSystem14createResourceERKN4sead14SafeStringBaseIcEEPNS0_16ResourceCategoryEPKc` | `al::ResourceSystem::createResource(sead::SafeStringBase<char> const&,al::ResourceSystem::ResourceCategory *,char const*)` | :white_check_mark: |
| `_ZN2al14ResourceSystem14removeCategoryERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::removeCategory(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `sub_7100A7D750` | `` | :white_check_mark: |
| `_ZN2al14ResourceSystem12findResourceERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::findResource(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `_ZN2al14ResourceSystem16findResourceCoreERKN4sead14SafeStringBaseIcEEPNS1_10RingBufferIPNS0_16ResourceCategoryEE8iteratorE` | `al::ResourceSystem::findResourceCore(sead::SafeStringBase<char> const&,sead::RingBuffer<al::ResourceSystem::ResourceCategory *>::iterator *)` | :white_check_mark: |
| `_ZN2al14ResourceSystem20findOrCreateResourceERKN4sead14SafeStringBaseIcEEPKc` | `al::ResourceSystem::findOrCreateResource(sead::SafeStringBase<char> const&,char const*)` | :white_check_mark: |
| `_ZN2al14ResourceSystem20findResourceCategoryERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::findResourceCategory(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `_ZN2al14ResourceSystem22loadCategoryArchiveAllERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::loadCategoryArchiveAll(sead::SafeStringBase<char> const&)` | :white_check_mark: |
| `_ZN2al14ResourceSystem18setCurrentCategoryEPKc` | `al::ResourceSystem::setCurrentCategory(char const*)` | :white_check_mark: |
| `_ZNK2al14ResourceSystem25findCategoryNameFromTableERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::findCategoryNameFromTable(sead::SafeStringBase<char> const&)const` | :white_check_mark: |
| `_ZNK2al14ResourceSystem23tryGetTableCategoryIterEPNS_9ByamlIterERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::tryGetTableCategoryIter(al::ByamlIter *,sead::SafeStringBase<char> const&)const` | :white_check_mark: |
| `_ZN4sead10StrTreeMapILi156EPN2al8ResourceEE6insertERKNS_14SafeStringBaseIcEERKS3_` | `sead::StrTreeMap<156,al::Resource *>::insert(sead::SafeStringBase<char> const&,al::Resource * const&)` | :white_check_mark: |
| `_ZNK2al14ResourceSystem22tryGetGraphicsInfoIterEPNS_9ByamlIterERKN4sead14SafeStringBaseIcEE` | `al::ResourceSystem::tryGetGraphicsInfoIter(al::ByamlIter *,sead::SafeStringBase<char> const&)const` | :white_check_mark: |
| `_ZN4sead10StrTreeMapILi156EPN2al8ResourceEE19ForEachConstContextIPFvRNS_14SafeStringBaseIcEES3_EE4callEPNS_11TreeMapNodeIS7_EE` | `sead::StrTreeMap<156,al::Resource *>::ForEachConstContext<void (*)(sead::SafeStringBase<char> &,al::Resource *)>::call(sead::TreeMapNode<sead::SafeStringBase<char>> *)` | :white_check_mark: |
| `_ZN4sead11TreeMapImplINS_14SafeStringBaseIcEEE7forEachINS_9Delegate1INS_10StrTreeMapILi156EPN2al8ResourceEE19ForEachConstContextIPFvRS2_S9_EEEPNS_11TreeMapNodeIS2_EEEEEEvSI_RKT_` | `void sead::TreeMapImpl<sead::SafeStringBase<char>>::forEach<sead::Delegate1<sead::StrTreeMap<156,al::Resource *>::ForEachConstContext<void (*)(sead::SafeStringBase<char>&,al::Resource *)>,sead::TreeMapNode<sead::SafeStringBase<char>> *>>(sead::TreeMapNode<sead::SafeStringBase<char>> *,sead::Delegate1<sead::StrTreeMap<156,al::Resource *>::ForEachConstContext<void (*)(sead::SafeStringBase<char>&,al::Resource *)>,sead::TreeMapNode<sead::SafeStringBase<char>> *> const&)` | :white_check_mark: |
| `_ZN4sead9Delegate1INS_10StrTreeMapILi156EPN2al8ResourceEE19ForEachConstContextIPFvRNS_14SafeStringBaseIcEES4_EEEPNS_11TreeMapNodeIS8_EEE6invokeESF_` | `sead::Delegate1<sead::StrTreeMap<156,al::Resource *>::ForEachConstContext<void (*)(sead::SafeStringBase<char> &,al::Resource *)>,sead::TreeMapNode<sead::SafeStringBase<char>> *>::invoke(sead::TreeMapNode<sead::SafeStringBase<char>> *)` | :white_check_mark: |
| `_ZNK4sead9Delegate1INS_10StrTreeMapILi156EPN2al8ResourceEE19ForEachConstContextIPFvRNS_14SafeStringBaseIcEES4_EEEPNS_11TreeMapNodeIS8_EEE5cloneEPNS_4HeapE` | `sead::Delegate1<sead::StrTreeMap<156,al::Resource *>::ForEachConstContext<void (*)(sead::SafeStringBase<char> &,al::Resource *)>,sead::TreeMapNode<sead::SafeStringBase<char>> *>::clone(sead::Heap *)const` | :white_check_mark: |
| `sub_7100A7E598` | `` | :white_check_mark: |
| `sub_7100A7E714` | `` | :white_check_mark: |
| `sub_7100A7E788` | `` | :white_check_mark: |
| `sub_7100A7E7B8` | `` | :white_check_mark: |
| `_ZN4sead10StrTreeMapILi156EPN2al8ResourceEE18eraseNodeForClear_EPNS_11TreeMapNodeINS_14SafeStringBaseIcEEEE` | `sead::StrTreeMap<156,al::Resource *>::eraseNodeForClear_(sead::TreeMapNode<sead::SafeStringBase<char>> *)` | :white_check_mark: |
| `_ZN4sead11TreeMapImplINS_14SafeStringBaseIcEEE7forEachINS_9Delegate1INS_10StrTreeMapILi156EPN2al8ResourceEEEPNS_11TreeMapNodeIS2_EEEEEEvSD_RKT_` | `void sead::TreeMapImpl<sead::SafeStringBase<char>>::forEach<sead::Delegate1<sead::StrTreeMap<156,al::Resource *>,sead::TreeMapNode<sead::SafeStringBase<char>> *>>(sead::TreeMapNode<sead::SafeStringBase<char>> *,sead::Delegate1<sead::StrTreeMap<156,al::Resource *>,sead::TreeMapNode<sead::SafeStringBase<char>> *> const&)` | :white_check_mark: |
| `_ZN4sead9Delegate1INS_10StrTreeMapILi156EPN2al8ResourceEEEPNS_11TreeMapNodeINS_14SafeStringBaseIcEEEEE6invokeESA_` | `sead::Delegate1<sead::StrTreeMap<156,al::Resource *>,sead::TreeMapNode<sead::SafeStringBase<char>> *>::invoke(sead::TreeMapNode<sead::SafeStringBase<char>> *)` | :white_check_mark: |
| `_ZNK4sead9Delegate1INS_10StrTreeMapILi156EPN2al8ResourceEEEPNS_11TreeMapNodeINS_14SafeStringBaseIcEEEEE5cloneEPNS_4HeapE` | `sead::Delegate1<sead::StrTreeMap<156,al::Resource *>,sead::TreeMapNode<sead::SafeStringBase<char>> *>::clone(sead::Heap *)const` | :white_check_mark: |
| `_ZN4sead10StrTreeMapILi156EPN2al8ResourceEE4NodeD0Ev` | `sead::StrTreeMap<156,al::Resource *>::Node::~Node()` | :white_check_mark: |
| `_ZN4sead10StrTreeMapILi156EPN2al8ResourceEE4Node6erase_Ev` | `sead::StrTreeMap<156,al::Resource *>::Node::erase_(void)` | :white_check_mark: |
