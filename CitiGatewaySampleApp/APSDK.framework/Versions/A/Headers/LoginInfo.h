//
//  LoginInfo.h
//  AnyPresence SDK
//

/*!
 @header LoginInfo
 @abstract LoginInfo class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class LoginInfo
 @abstract Generated model object: LoginInfo.
 @discussion Use @link //apple_ref/occ/cat/LoginInfo(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/LoginInfo/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface LoginInfo : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a LoginInfo.
 @result Class representing the data source associated with a LoginInfo.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSNumber * id;

/*!
 @var isEligibleForOffers
 @abstract Generated model property: is_eligible_for_offers.
 */
@property (nonatomic, strong) NSNumber * isEligibleForOffers;

/*!
 @var isPersonToPersonRequired
 @abstract Generated model property: is_person_to_person_required.
 */
@property (nonatomic, strong) NSNumber * isPersonToPersonRequired;

/*!
 @var password
 @abstract Generated model property: password.
 */
@property (nonatomic, strong) NSString * password;

/*!
 @var token
 @abstract Generated model property: token.
 */
@property (nonatomic, strong) NSString * token;

/*!
 @var username
 @abstract Generated model property: username.
 */
@property (nonatomic, strong) NSString * username;

@end
