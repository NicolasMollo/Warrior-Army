#ifndef WARRIORARMY_AWAKEABLE
#define WARRIORARMY_AWAKEABLE

namespace Lifecycle {

	class IAwakeable {

	public:
		virtual void Awake() = 0;
	};

}

#endif // !WARRIORARMY_AWAKEABLE