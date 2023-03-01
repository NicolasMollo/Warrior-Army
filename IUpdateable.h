#ifndef WARRIORARMY_UPDATEABLE
#define WARRIORARMY_UPDATEABLE

namespace Lifecycle {

	class IUpdateable {
	public:
		virtual void Update() = 0;
	};

}
#endif // !WARRIORARMY_UPDATEABLE